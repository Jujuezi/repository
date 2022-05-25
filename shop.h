#ifndef SHOP_H
#define SHOP_H

#include <QDialog>
#include"game.h"
#include"buypig.h"

namespace Ui {
class shop;
}

class shop : public QDialog
{
    Q_OBJECT


public:
    explicit shop(QWidget *parent = 0);
    ~shop();
    static int whitePrice;
    static int blackPrice;
    static int HuaPrice;
    static int n;//标记购买的是哪种猪 1白猪 2黑猪 3花猪
signals:
    void buyPigSuccess();
private slots:
    void on_btnExit_clicked();

    void on_btnWhiteBuy_clicked();

    void on_btnBlackBuy_clicked();

    void on_btnHuaBuy_clicked();

    void UpdateText();
    void sendBuySuccess();

private:
    Ui::shop *ui;
    QString temp;
};

#endif // SHOP_H
