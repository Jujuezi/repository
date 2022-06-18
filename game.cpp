#include "game.h"
#include "ui_game.h"
#include<QDialog>

int game::pigFarmNum=0;//猪场数量
int game::whitePigNum=0;//小猪数量
int game::blackPigNum=0;
int game::huaPigNum=0;
int game::money=10000;//钱
int game::pigFarmPrice=1000;//猪场价格
int game::numrec=0;//进入的猪场编号
bigpigfarmclass game::bpf;//猪场对象:储存猪栏信息
wheat game::wt;
corn game::cn;
cabbage game::cb;
Person game::man;

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
    connect(tt,&QTimer::timeout,this,&game::pigGrowUp);
    ui->lblTime->setText("游戏开始！");
    QPixmap pixmap;
    pixmap.load(":/pig/man.png");
    ui->lblMan->setPixmap(pixmap);
    ui->btnExit->setFlat(true);
    ui->btnShop->setFlat(true);
    ui->btnZhuchang1->setFlat(true);
    ui->btnZhuchang2->setFlat(true);
    ui->btnZhuchang3->setFlat(true);
    ui->btnZhuchang4->setFlat(true);
    ui->btnZhuchang5->setFlat(true);
    ui->btnZhuchang6->setFlat(true);

    QMediaPlaylist *musicList = new QMediaPlaylist(this);   //添加音乐列表
    musicList->addMedia(QUrl("qrc:/pig/summer.mp3"));

    QMediaPlayer *soundPlayer = new QMediaPlayer(this);  //创建音乐播放器
    soundPlayer->setPlaylist(musicList);  //设置音乐列表
    soundPlayer->play();
    //以上会使音乐顺序播放
    //如果只有一首音乐，同样添加到musicList中，再添加一条
    musicList->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);  //循环播放
    //这样就可以单首音乐循环播放
}

void game::pigGrowUp()
{
    if(!buyPig::vw.empty())
    {
    for(vector<whitePig>::iterator it=buyPig::vw.begin();it!=buyPig::vw.end();it++)
    {
        if((*it).pushRec!=0)
        (*it).growUp();
    }
    }
    if(!buyPig::vb.empty())
    {
    for(vector<blackPig>::iterator it=buyPig::vb.begin();it!=buyPig::vb.end();it++)
    {
        if((*it).pushRec!=0)
        (*it).growUp();
    }
    }
    if(!buyPig::vh.empty())
    {
    for(vector<huaPig>::iterator it=buyPig::vh.begin();it!=buyPig::vh.end();it++)
    {
        if((*it).pushRec!=0)
        (*it).growUp();
    }
    }

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
        numrec=1;
        connect(pf,&pigFarm::updatePig,this,&game::UpdatePig);
    }
}


void game::on_btnExit_clicked()
{
    emit sendsignal();
    cleardata();
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
    QString temp4=QString::number(cn.num,10);
    QString temp5=QString::number(wt.num,10);
    QString temp6=QString::number(cb.num,10);
    ui->lblNowCount->setText("现有白猪："+temp1+
                             " 现有黑猪："+temp2+
                             " 现有花猪："+temp3);
    ui->lblNowFood->setText("现有玉米粉："+temp4+
                            "公斤 现有小麦粉："+temp5+
                            "公斤 现有卷心菜："+temp6+"公斤");
}

void game::record1Change()
{
    record1=true;
}
void game::record2Change()
{
    record2=true;
}
void game::record3Change()
{
    record3=true;
}
void game::record4Change()
{
    record4=true;
}
void game::record5Change()
{
    record5=true;
}
void game::record6Change()
{
    record6=true;
}
void game::on_btnShop_clicked()
{
    shop *sp=new shop(this);
    sp->show();
    connect(sp,SIGNAL(buyPigSuccess()),this,SLOT(UpdatePig()));
}
void game::on_btnZhuchang2_clicked()
{
    if(!record2)
    {
    have *hv=new have(this);
    hv->show();
    connect(hv,SIGNAL(buysuccess()),this,SLOT(buySuccessUpdate()));//更新数据
    connect(hv,SIGNAL(buysuccess()),this,SLOT(UpdatePig()));//更新文本
    connect(hv,SIGNAL(buysuccess()),this,SLOT(record2Change()));//更新标记
    connect(this,SIGNAL(canBuySignal()),hv,SLOT(CanBuy()));
    if(money>pigFarmPrice)
        emit canBuySignal();
    }
    if(record2)
    {
        pigFarm *pf=new pigFarm(this);
        pf->show();
        numrec=2;
        connect(pf,&pigFarm::updatePig,this,&game::UpdatePig);
    }
}

void game::cleardata()
{
    pigFarmNum=0;//猪场数量
    whitePigNum=0;//小猪数量
    blackPigNum=0;
    huaPigNum=0;
    money=10000;//钱
    pigFarmPrice=1000;
    wt.num=0;
    cn.num=0;
    cb.num=0;
    pigFarm::rec=0;
    for(int i=0;i<6;i++)
    {
    bpf.p1[i].comb1rec=0;
    bpf.p1[i].comb2rec=0;
    bpf.p1[i].havePigNum=0;
    bpf.p2[i].comb1rec=0;
    bpf.p2[i].comb2rec=0;
    bpf.p2[i].havePigNum=0;
    bpf.p3[i].comb1rec=0;
    bpf.p3[i].comb2rec=0;
    bpf.p3[i].havePigNum=0;
    bpf.p4[i].comb1rec=0;
    bpf.p4[i].comb2rec=0;
    bpf.p4[i].havePigNum=0;
    bpf.p5[i].comb1rec=0;
    bpf.p5[i].comb2rec=0;
    bpf.p5[i].havePigNum=0;
    bpf.p6[i].comb1rec=0;
    bpf.p6[i].comb2rec=0;
    bpf.p6[i].havePigNum=0;
    }
    pushType::PushWhitePigNum=0;
    pushType::PushBlackPigNum=0;
    pushType::PushHuaPigNum=0;
    pushType::emptyWhitePigNum=0;
    pushType::emptyBlackPigNum=0;
    pushType::emptyHuaPigNum=0;
    pushType::whiteii=0;
    pushType::blackii=0;
    pushType::huaii=0;
    shop::whitePrice=500;
    shop::blackPrice=1000;
    shop::HuaPrice=2000;
    shop::n=0;

}
void game::on_btnZhuchang3_clicked()
{
    if(!record3)
    {
    have *hv=new have(this);
    hv->show();
    connect(hv,SIGNAL(buysuccess()),this,SLOT(buySuccessUpdate()));//更新数据
    connect(hv,SIGNAL(buysuccess()),this,SLOT(UpdatePig()));//更新文本
    connect(hv,SIGNAL(buysuccess()),this,SLOT(record3Change()));//更新标记
    connect(this,SIGNAL(canBuySignal()),hv,SLOT(CanBuy()));
    if(money>pigFarmPrice)
        emit canBuySignal();
    }
    if(record3)
    {
        pigFarm *pf=new pigFarm(this);
        pf->show();
        numrec=3;
        connect(pf,&pigFarm::updatePig,this,&game::UpdatePig);
    }
}
void game::on_btnZhuchang4_clicked()
{
    if(!record4)
    {
    have *hv=new have(this);
    hv->show();
    connect(hv,SIGNAL(buysuccess()),this,SLOT(buySuccessUpdate()));//更新数据
    connect(hv,SIGNAL(buysuccess()),this,SLOT(UpdatePig()));//更新文本
    connect(hv,SIGNAL(buysuccess()),this,SLOT(record4Change()));//更新标记
    connect(this,SIGNAL(canBuySignal()),hv,SLOT(CanBuy()));
    if(money>pigFarmPrice)
        emit canBuySignal();
    }
    if(record4)
    {
        pigFarm *pf=new pigFarm(this);
        pf->show();
        numrec=4;
        connect(pf,&pigFarm::updatePig,this,&game::UpdatePig);
    }
}
void game::on_btnZhuchang5_clicked()
{
    if(!record5)
    {
    have *hv=new have(this);
    hv->show();
    connect(hv,SIGNAL(buysuccess()),this,SLOT(buySuccessUpdate()));//更新数据
    connect(hv,SIGNAL(buysuccess()),this,SLOT(UpdatePig()));//更新文本
    connect(hv,SIGNAL(buysuccess()),this,SLOT(record5Change()));//更新标记
    connect(this,SIGNAL(canBuySignal()),hv,SLOT(CanBuy()));
    if(money>pigFarmPrice)
        emit canBuySignal();
    }
    if(record5)
    {
        pigFarm *pf=new pigFarm(this);
        pf->show();
        numrec=5;
        connect(pf,&pigFarm::updatePig,this,&game::UpdatePig);
    }
}
void game::on_btnZhuchang6_clicked()
{
    if(!record6)
    {
    have *hv=new have(this);
    hv->show();
    connect(hv,SIGNAL(buysuccess()),this,SLOT(buySuccessUpdate()));//更新数据
    connect(hv,SIGNAL(buysuccess()),this,SLOT(UpdatePig()));//更新文本
    connect(hv,SIGNAL(buysuccess()),this,SLOT(record6Change()));//更新标记
    connect(this,SIGNAL(canBuySignal()),hv,SLOT(CanBuy()));
    if(money>pigFarmPrice)
        emit canBuySignal();
    }
    if(record6)
    {
        pigFarm *pf=new pigFarm(this);
        pf->show();
        numrec=6;
        connect(pf,&pigFarm::updatePig,this,&game::UpdatePig);
    }
}



