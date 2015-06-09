#ifndef QJSONTEST_H
#define QJSONTEST_H

#include <QMainWindow>

namespace Ui {
class qJsonTest;
}

class qJsonTest : public QMainWindow
{
    Q_OBJECT

public:
    explicit qJsonTest(QWidget *parent = 0);
    ~qJsonTest();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::qJsonTest *ui;
    void genJson();
    void creatJson();
};

#endif // QJSONTEST_H
