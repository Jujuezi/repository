#include "have.h"
#include "ui_have.h"
#include <QDebug>

have::have(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::have)
{
    ui->setupUi(this);
    QString price=QString::number(game::pigFarmPrice,10);
    ui->lblPrice->setText("这个猪场的价格："+price);
}

have::~have()
{
    delete ui;
}


void have::on_btnClose_clicked()
{
    close();
}
void have::CanBuy()
{
    buy=true;
}


void have::on_btnBuy_clicked()
{
    if(buy)//钱足够购买成功
    {
    QMessageBox::information(this,"提示","购买成功\n","好耶");
    close();
    emit buysuccess();
    }
    else
    {
    QMessageBox::information(this,"提示","钱不够了\n","去挣钱");
    }
}
