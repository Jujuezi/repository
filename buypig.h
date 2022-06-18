#ifndef BUYPIG_H
#define BUYPIG_H

#include <QDialog>
#include"game.h"
#include"shop.h"
#include"pig.h"

namespace Ui {
class buyPig;
}

class buyPig : public QDialog
{
    Q_OBJECT

public:
    explicit buyPig(QWidget *parent = 0);
    ~buyPig();
    static vector<whitePig> vw;//存放猪的数组
    static vector<blackPig> vb;
    static vector<huaPig> vh;
    static bool pigFlag;
    static bool foodFlag;

signals:
    void buyPigSuccess();
private slots:

    void on_spinBox_valueChanged(int arg1);

    void on_horizontalSlider_valueChanged(int value);



    void on_btnOK_clicked();

    void on_btnCancel_clicked();

private:
    Ui::buyPig *ui;
};

#endif // BUYPIG_H
