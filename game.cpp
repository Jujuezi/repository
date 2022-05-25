#include "game.h"
#include "ui_game.h"
#include<QDialog>

int game::pigFarmNum=0;//猪场数量
int game::whitePigNum=0;//小猪数量
int game::blackPigNum=0;
int game::huaPigNum=0;
int game::money=10000;//钱
int game::pigFarmPrice=1000;//猪场价格
game::game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
    UpdatePig();

    setFixedSize(1024,768);

    tt=new QTimer(this);
    tt->start(1000);
    connect(tt,&QTimer::timeout,this,&game::on_timer_timeout);
}

game::~game()
{
    delete ui;
}
void game::on_timer_timeout()
{
    QString tx;
    t++;
    if(t%9==1)
    {
        tx=QString::number(t/9+1,10);
        ui->lblTime->setText("现在是第"+tx+"天上午");
    }
    else if(t%9==4)
    {
        tx=QString::number(t/9+1,10);
        ui->lblTime->setText("现在是第"+tx+"天下午");
    }
    else if(t%9==7)
    {
        tx=QString::number(t/9+1,10);
        ui->lblTime->setText("现在是第"+tx+"天晚上");
    }
}

void game::on_btnZhuchang1_clicked()
{
    //没有这个猪场，弹出购买界面
    if(!record1)
    {
    have *hv=new have(this);
    hv->show();
    connect(hv,SIGNAL(buysuccess()),this,SLOT(buySuccessUpdate()));//更新数据
    connect(hv,SIGNAL(buysuccess()),this,SLOT(UpdatePig()));//更新文本
    connect(hv,SIGNAL(buysuccess()),this,SLOT(record1Change()));//更新标记
    connect(this,SIGNAL(canBuySignal()),hv,SLOT(CanBuy()));
    if(money>pigFarmPrice)
        emit canBuySignal();
    }
    //有猪场,直接进入
    if(record1)
    {
        pigFarm *pf=new pigFarm(this);
        pf->show();

    }
}


void game::on_btnExit_clicked()
{
    emit sendsignal();
    close();
}
void game::buySuccessUpdate()
{
    money-=pigFarmPrice;
    pigFarmNum+=1;
    pigFarmPrice+=1000;
}

void game::UpdatePig()
{
    temp=QString::number(pigFarmNum);
    ui->lblNowZhuchang->setText("现有猪场数量："+temp);
    temp.clear();
    temp=QString::number(money);
    ui->lblNowMoney->setText("现有资金："+temp);
    temp.clear();

    QString temp1=QString::number(whitePigNum);
    QString temp2=QString::number(blackPigNum);
    QString temp3=QString::number(huaPigNum);
    ui->lblNowCount->setText("现有白猪："+temp1+
                             " 现有黑猪："+temp2+
                             " 现有花猪："+temp3);
}

void game::record1Change()
{
    record1=true;
}

void game::on_btnShop_clicked()
{
    shop *sp=new shop(this);
    sp->show();
    connect(sp,SIGNAL(buyPigSuccess()),this,SLOT(UpdatePig()));
}
void game::on_btnZhuchang2_clicked()
{

}
void game::on_btnZhuchang3_clicked()
{

}
void game::on_btnZhuchang4_clicked()
{

}
void game::on_btnZhuchang5_clicked()
{

}
void game::on_btnZhuchang6_clicked()
{

}
void game::on_btnZhuchang7_clicked()
{

}
void game::on_btnZhuchang8_clicked()
{

}
void game::on_btnZhuchang9_clicked()
{

}


