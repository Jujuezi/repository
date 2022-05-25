#include "shop.h"
#include "ui_shop.h"

int shop::whitePrice=500;
int shop::blackPrice=1000;
int shop::HuaPrice=2000;
int shop::n=0;

shop::shop(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shop)
{
    ui->setupUi(this);
    UpdateText();
}

shop::~shop()
{
    delete ui;
}

void shop::UpdateText()
{
    temp=QString::number(HuaPrice);
    ui->labelHuaZhuIntroduction->setText("花猪价格："+temp+"￥/只");
    temp.clear();
    temp=QString::number(blackPrice);
    ui->labelBlackIntroduction->setText("黑猪价格："+temp+"￥/只");
    temp.clear();
    temp=QString::number(whitePrice);
    ui->labelWhiteIntroduction->setText("白猪价格："+temp+"￥/只");
    temp.clear();
}

void shop::on_btnExit_clicked()
{
    close();
}
void shop::sendBuySuccess()
{
    emit buyPigSuccess();
}

void shop::on_btnWhiteBuy_clicked()
{
    shop::n=1;
    buyPig *bp=new buyPig(this);
    bp->show();
connect(bp,SIGNAL(buyPigSuccess()),this,SLOT(sendBuySuccess()));

}

void shop::on_btnBlackBuy_clicked()
{
    shop::n=2;
    buyPig *bp=new buyPig(this);
    bp->show();
connect(bp,SIGNAL(buyPigSuccess()),this,SLOT(sendBuySuccess()));
}

void shop::on_btnHuaBuy_clicked()
{
    shop::n=3;
    buyPig *bp=new buyPig(this);
    bp->show();
    connect(bp,SIGNAL(buyPigSuccess()),this,SLOT(sendBuySuccess()));
}
