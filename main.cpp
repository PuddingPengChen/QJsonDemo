#include "qjsontest.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qJsonTest w;
    w.show();

    return a.exec();
}
