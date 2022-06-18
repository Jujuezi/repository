#include "shop.h"
#include "ui_shop.h"

int shop::whitePrice=500;
int shop::blackPrice=1000;
int shop::HuaPrice=2000;
int shop::n=0;
int shop::f=0;

shop::shop(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shop)
{
    ui->setupUi(this);
    UpdateText();
    QPixmap pixmap;
    pixmap.load(":/pig/whitePig.png");
    ui->lblWhitPig->setPixmap(pixmap);
    pixmap.load(":/pig/blackPig.png");
    ui->lblBlackPig->setPixmap(pixmap);
    pixmap.load(":/pig/huaPig.png");
    ui->lblHuaZhu->setPixmap(pixmap);
    pixmap.load(":/pig/corn.png");
    ui->label->setPixmap(pixmap);
    pixmap.load(":/pig/wheat.png");
    ui->label_2->setPixmap(pixmap);
    pixmap.load(":/pig/cabbage.png");
    ui->label_3->setPixmap(pixmap);
    setFixedSize(1024,768);
    ui->btnBlackBuy->setFlat(true);
    ui->btnCabbage->setFlat(true);
    ui->btnCorn->setFlat(true);
    ui->btnExit->setFlat(true);
    ui->btnHuaBuy->setFlat(true);
    ui->btnWheat->setFlat(true);
    ui->btnWhiteBuy->setFlat(true);
    ui->lblBlackPig->setScaledContents(true);
    ui->lblWhitPig->setScaledContents(true);
    ui->lblHuaZhu->setScaledContents(true);
    ui->label->setScaledContents(true);
    ui->label_2->setScaledContents(true);
    ui->label_3->setScaledContents(true);
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
    buyPig::pigFlag=false;
    buyPig::foodFlag=false;
}

void shop::on_btnWhiteBuy_clicked()
{
    n=1;
    buyPig *bp=new buyPig(this);
    bp->show();
    buyPig::pigFlag=true;
connect(bp,SIGNAL(buyPigSuccess()),this,SLOT(sendBuySuccess()));
}

void shop::on_btnBlackBuy_clicked()
{
    n=2;
    buyPig *bp=new buyPig(this);
    bp->show();
    buyPig::pigFlag=true;
connect(bp,SIGNAL(buyPigSuccess()),this,SLOT(sendBuySuccess()));
}

void shop::on_btnHuaBuy_clicked()
{
    n=3;
    buyPig *bp=new buyPig(this);
    bp->show();
    buyPig::pigFlag=true;
    connect(bp,SIGNAL(buyPigSuccess()),this,SLOT(sendBuySuccess()));
}

void shop::on_btnCorn_clicked()
{
    f=1;
    emit buyFood(f);
    buyPig *bp=new buyPig(this);
    bp->show();
    buyPig::foodFlag=true;
    connect(bp,SIGNAL(buyPigSuccess()),this,SLOT(sendBuySuccess()));
}

void shop::on_btnWheat_clicked()
{
    f=2;
    emit buyFood(f);
    buyPig *bp=new buyPig(this);
    bp->show();
    buyPig::foodFlag=true;
    connect(bp,SIGNAL(buyPigSuccess()),this,SLOT(sendBuySuccess()));
}

void shop::on_btnCabbage_clicked()
{
    f=3;
    emit buyFood(f);
    buyPig *bp=new buyPig(this);
    bp->show();
    buyPig::foodFlag=true;
    connect(bp,SIGNAL(buyPigSuccess()),this,SLOT(sendBuySuccess()));
}
