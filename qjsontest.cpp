#include "qjsontest.h"
#include "ui_qjsontest.h"
#include "./QJson/parser.h"
#include "./QJson/serializer.h"
#include <QDebug>
#include <QVariant>
using namespace QJson;
qJsonTest::qJsonTest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::qJsonTest)
{
    ui->setupUi(this);
}

qJsonTest::~qJsonTest()
{
    delete ui;
}
void qJsonTest::genJson()       //json covent to QVarianMap
{
    QByteArray json="{\"encoding\": \"UTF-8\","
                    "\"plug-in\":["
                    "\"python\","
                    "\"C++\","
                    "\"Ruby\""
                    "],"
                    "\"index\":{\"length\":3,\"use_space\":true}}";
    QJson::Parser parser;
    bool ok;
    QVariantMap result = parser.parse (json, &ok).toMap();
    if (!ok) {
      qFatal("An error occured during parsing");
      exit (1);
    }
    qDebug() << "encoding:" << result["encoding"].toString();
    qDebug() << "plugins:";
    foreach (QVariant plugin, result["plug-ins"].toList()) {
      qDebug() << "\t-" << plugin.toString();
    }
    QVariantMap nestedMap = result["indent"].toMap();
    qDebug() << "length:" << nestedMap["length"].toInt();
    qDebug() << "use_space:" << nestedMap["use_space"].toBool();

}

void qJsonTest::on_pushButton_clicked()//parase json data
{
    genJson();
}

void qJsonTest::creatJson() //how the QVarianMap turn to json data
{
   QVariantList people;

   QVariantMap bob;
   bob.insert("Name", "Bob");
   bob.insert("Phonenumber", 123);

   QVariantMap alice;
   alice.insert("Name", "Alice");
   alice.insert("Phonenumber", 321);

   people << bob << alice;

   QJson::Serializer serializer;
   QByteArray json = serializer.serialize(people);
   qDebug() << json;
}

void qJsonTest::on_pushButton_2_clicked()
{
    creatJson();
}
