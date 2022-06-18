#include "feed.h"
#include "ui_feed.h"

feed::feed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::feed)
{
    ui->setupUi(this);
    foodInit();
    ui->btnOk->setFlat(true);
    ui->btnCancel->setFlat(true);
}

feed::~feed()
{
    delete ui;
}
void feed::foodInit()
{
    if(!pigExist1())
        ui->comboBox->setEnabled(false);
    else
        ui->comboBox->setEnabled(true);
    if(!pigExist2())
        ui->comboBox_2->setEnabled(false);
    else
        ui->comboBox_2->setEnabled(true);
    if(game::cn.num>0)
    {
        if(pigExist1())
        ui->comboBox->addItem("玉米粉");
        if(pigExist2())
        ui->comboBox_2->addItem("玉米粉");
    }
    if(game::cb.num>0)
    {
        if(pigExist1())
        ui->comboBox->addItem("卷心菜");
        if(pigExist2())
        ui->comboBox_2->addItem("卷心菜");
    }
    if(game::wt.num>0)
    {
        if(pigExist1())
        ui->comboBox->addItem("小麦粉");
        if(pigExist2())
        ui->comboBox_2->addItem("小麦粉");
    }
    if(game::cb.num==0&&game::cn.num==0&&game::wt.num==0)
    {
        QMessageBox::information(this,"没有食物！","你没有食物了！");
    }
}
void feed::findPig(int numRec,int rec,int combNum,int i)
{
    for(vector<whitePig>::iterator it1=buyPig::vw.begin();it1!=buyPig::vw.end();it1++)
    {
        if((*it1).NumRecPos==numRec&&(*it1).RecPos==rec-1&&(*it1).combPos==combNum)
        {
            (*it1).feedFd(i);
//            qDebug()<<"pig:"<<it1.NumRecPos<<it1.RecPos<<it1.combPos;
//            qDebug()<<"vw[0]:"<<buyPig::vw[0].NumRecPos<<buyPig::vw[0].RecPos<<buyPig::vw[0].combPos;
        }
    }
//    buyPig::vw[farmText::Index1_1].feedFd(i);
    for(vector<blackPig>::iterator it2=buyPig::vb.begin();it2!=buyPig::vb.end();it2++)
    {
        if((*it2).NumRecPos==numRec&&(*it2).RecPos==rec-1&&(*it2).combPos==combNum)
        {
            (*it2).feedFd(i);
        }
    }
    for(vector<huaPig>::iterator it3=buyPig::vh.begin();it3!=buyPig::vh.end();it3++)
    {
        if((*it3).NumRecPos==numRec&&(*it3).RecPos==rec-1&&(*it3).combPos==combNum)
        {
            (*it3).feedFd(i);
        }
    }
    //    qDebug()<<"寻找";
}

bool feed::pigExist1()
{
    for(vector<whitePig>::iterator it1=buyPig::vw.begin();it1!=buyPig::vw.end();it1++)
    {
        if((*it1).NumRecPos==game::numrec&&(*it1).RecPos==pigFarm::rec-1&&(*it1).combPos==1)
        {
            return true;
        }
    }
    for(vector<blackPig>::iterator it2=buyPig::vb.begin();it2!=buyPig::vb.end();it2++)
    {
        if((*it2).NumRecPos==game::numrec&&(*it2).RecPos==pigFarm::rec-1&&(*it2).combPos==1)
        {
            return true;
        }
    }
    for(vector<huaPig>::iterator it3=buyPig::vh.begin();it3!=buyPig::vh.end();it3++)
    {
        if((*it3).NumRecPos==game::numrec&&(*it3).RecPos==pigFarm::rec-1&&(*it3).combPos==1)
        {
            return true;
        }
    }
    return false;
}
bool feed::pigExist2()
{
    for(vector<whitePig>::iterator it1=buyPig::vw.begin();it1!=buyPig::vw.end();it1++)
    {
//        qDebug()<<(*it1).combPos;
        if((*it1).NumRecPos==game::numrec&&(*it1).RecPos==pigFarm::rec-1&&(*it1).combPos==2)
        {
            return true;
        }
    }
    for(vector<blackPig>::iterator it2=buyPig::vb.begin();it2!=buyPig::vb.end();it2++)
    {
        if((*it2).NumRecPos==game::numrec&&(*it2).RecPos==pigFarm::rec-1&&(*it2).combPos==2)
        {
            return true;
        }
    }
    for(vector<huaPig>::iterator it3=buyPig::vh.begin();it3!=buyPig::vh.end();it3++)
    {
        if((*it3).NumRecPos==game::numrec&&(*it3).RecPos==pigFarm::rec-1&&(*it3).combPos==2)
        {
            return true;
        }
    }
    return false;
}
void feed::on_btnOk_clicked()
{
    int i1,i2;
    if(ui->comboBox->currentText()=="卷心菜")
        i1=1;
    else if(ui->comboBox->currentText()=="小麦粉")
        i1=2;
    else if(ui->comboBox->currentText()=="玉米粉")
        i1=3;
    findPig(game::numrec,pigFarm::rec,1,i1);
    switch(i1)
    {
    case 1:
    {
        game::cb.num--;
        break;
    }
    case 2:
    {
        game::wt.num--;
        break;
    }
    case 3:
    {
        game::cn.num--;
        break;
    }
    }
    emit updatePig();
    if(ui->comboBox_2->currentText()=="卷心菜")
        i2=1;
    else if(ui->comboBox_2->currentText()=="小麦粉")
        i2=2;
    else if(ui->comboBox_2->currentText()=="玉米粉")
        i2=3;
    if(game::wt.num>0||game::cb.num>0||game::cn.num>0)
    findPig(game::numrec,pigFarm::rec,2,i2);
    else
    {
        QMessageBox::information(this,"食物不够！","你的食物不够了！");
        close();
        return;
    }
    switch(i2)
    {
    case 1:
    {
        game::cb.num--;
        break;
    }
    case 2:
    {
        game::wt.num--;
        break;
    }
    case 3:
    {
        game::cn.num--;
        break;
    }
    }
    emit updatePig();
    close();
}

void feed::on_btnCancel_clicked()
{
    close();
}

