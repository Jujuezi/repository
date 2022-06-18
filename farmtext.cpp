#include "farmtext.h"
#include "ui_farmtext.h"
int farmText::Index1_1=-1;
int farmText::Index1_2=-1;
int farmText::Index1_3=-1;
int farmText::Index1_4=-1;
int farmText::Index1_5=-1;
int farmText::Index1_6=-1;
int farmText::Index1_7=-1;
int farmText::Index1_8=-1;
int farmText::Index1_9=-1;
int farmText::Index1_10=-1;
int farmText::Index1_11=-1;
int farmText::Index1_12=-1;
int farmText::Index2_1=-1;
int farmText::Index2_2=-1;
int farmText::Index2_3=-1;
int farmText::Index2_4=-1;
int farmText::Index2_5=-1;
int farmText::Index2_6=-1;
int farmText::Index2_7=-1;
int farmText::Index2_8=-1;
int farmText::Index2_9=-1;
int farmText::Index2_10=-1;
int farmText::Index2_11=-1;
int farmText::Index2_12=-1;
int farmText::Index3_1=-1;
int farmText::Index3_2=-1;
int farmText::Index3_3=-1;
int farmText::Index3_4=-1;
int farmText::Index3_5=-1;
int farmText::Index3_6=-1;
int farmText::Index3_7=-1;
int farmText::Index3_8=-1;
int farmText::Index3_9=-1;
int farmText::Index3_10=-1;
int farmText::Index3_11=-1;
int farmText::Index3_12=-1;
int farmText::Index4_1=-1;
int farmText::Index4_2=-1;
int farmText::Index4_3=-1;
int farmText::Index4_4=-1;
int farmText::Index4_5=-1;
int farmText::Index4_6=-1;
int farmText::Index4_7=-1;
int farmText::Index4_8=-1;
int farmText::Index4_9=-1;
int farmText::Index4_10=-1;
int farmText::Index4_11=-1;
int farmText::Index4_12=-1;
int farmText::Index5_1=-1;
int farmText::Index5_2=-1;
int farmText::Index5_3=-1;
int farmText::Index5_4=-1;
int farmText::Index5_5=-1;
int farmText::Index5_6=-1;
int farmText::Index5_7=-1;
int farmText::Index5_8=-1;
int farmText::Index5_9=-1;
int farmText::Index5_10=-1;
int farmText::Index5_11=-1;
int farmText::Index5_12=-1;
int farmText::Index6_1=-1;
int farmText::Index6_2=-1;
int farmText::Index6_3=-1;
int farmText::Index6_4=-1;
int farmText::Index6_5=-1;
int farmText::Index6_6=-1;
int farmText::Index6_7=-1;
int farmText::Index6_8=-1;
int farmText::Index6_9=-1;
int farmText::Index6_10=-1;
int farmText::Index6_11=-1;
int farmText::Index6_12=-1;
int farmText::pushrec1_1=0;
int farmText::pushrec1_2=0;
int farmText::pushrec1_3=0;
int farmText::pushrec1_4=0;
int farmText::pushrec1_5=0;
int farmText::pushrec1_6=0;
int farmText::pushrec1_7=0;
int farmText::pushrec1_8=0;
int farmText::pushrec1_9=0;
int farmText::pushrec1_10=0;
int farmText::pushrec1_11=0;
int farmText::pushrec1_12=0;
int farmText::pushrec2_1=0;
int farmText::pushrec2_2=0;
int farmText::pushrec2_3=0;
int farmText::pushrec2_4=0;
int farmText::pushrec2_5=0;
int farmText::pushrec2_6=0;
int farmText::pushrec2_7=0;
int farmText::pushrec2_8=0;
int farmText::pushrec2_9=0;
int farmText::pushrec2_10=0;
int farmText::pushrec2_11=0;
int farmText::pushrec2_12=0;
int farmText::pushrec3_1=0;
int farmText::pushrec3_2=0;
int farmText::pushrec3_3=0;
int farmText::pushrec3_4=0;
int farmText::pushrec3_5=0;
int farmText::pushrec3_6=0;
int farmText::pushrec3_7=0;
int farmText::pushrec3_8=0;
int farmText::pushrec3_9=0;
int farmText::pushrec3_10=0;
int farmText::pushrec3_11=0;
int farmText::pushrec3_12=0;
int farmText::pushrec4_1=0;
int farmText::pushrec4_2=0;
int farmText::pushrec4_3=0;
int farmText::pushrec4_4=0;
int farmText::pushrec4_5=0;
int farmText::pushrec4_6=0;
int farmText::pushrec4_7=0;
int farmText::pushrec4_8=0;
int farmText::pushrec4_9=0;
int farmText::pushrec4_10=0;
int farmText::pushrec4_11=0;
int farmText::pushrec4_12=0;
int farmText::pushrec5_1=0;
int farmText::pushrec5_2=0;
int farmText::pushrec5_3=0;
int farmText::pushrec5_4=0;
int farmText::pushrec5_5=0;
int farmText::pushrec5_6=0;
int farmText::pushrec5_7=0;
int farmText::pushrec5_8=0;
int farmText::pushrec5_9=0;
int farmText::pushrec5_10=0;
int farmText::pushrec5_11=0;
int farmText::pushrec5_12=0;
int farmText::pushrec6_1=0;
int farmText::pushrec6_2=0;
int farmText::pushrec6_3=0;
int farmText::pushrec6_4=0;
int farmText::pushrec6_5=0;
int farmText::pushrec6_6=0;
int farmText::pushrec6_7=0;
int farmText::pushrec6_8=0;
int farmText::pushrec6_9=0;
int farmText::pushrec6_10=0;
int farmText::pushrec6_11=0;
int farmText::pushrec6_12=0;
farmText::farmText(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::farmText)
{
    ui->setupUi(this);
    getText();
    setFixedSize(1024,768);
    tt=new QTimer(this);
    tt->start(1000);
    connect(tt,&QTimer::timeout,this,&farmText::getText);
    QFont ft;
    ft.setPointSize(20);
    ui->textEdit->setFont(ft);
    ui->textEdit->setReadOnly(true);
    pushType *p=new pushType(this);
    emit commboxReady();
    connect(this,SIGNAL(commboxReady()),p,SLOT(combboxInit()));
    connect(p,SIGNAL(push()),this,SLOT(getText()));
    ui->btnClose->setFlat(true);
    ui->btnFeed->setFlat(true);
    ui->btnPush->setFlat(true);
    ui->btnSell->setFlat(true);

}

void farmText::getText()
{

    QString num=QString::number(pigFarm::rec,10);
//    qDebug()<<"pigfarm.rec:"<<pigFarm::rec<<" string:"<<num;
//    qDebug()<<"bpf.havepignum:"<<game::bpf.p1[pigFarm::rec-1].havePigNum;
//    qDebug()<<"bpfnum："<<pigFarm::rec-1;
    QString line1="\t猪栏编号:";
    QString line2="\n-----------------猪栏情况----------------";
   //猪类型+重量+是否能卖+饥饿度
    QString line3;
    QString line4_1="\n\n\t小猪饱食度：";
    switch(game::numrec)
    {
    case 1:
    {
        switch(pigFarm::rec)
        {
        case 1:
        {
    if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
    {
        line3="\n\t该栏里没有猪";
        ui->textEdit->setText(line1+num+
                              line2+
                              line3
                              );
    }
    else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
        {
            line3="\n\n\t该栏有";
        QString line4="\n\n\t小猪重量：";
//        QString line6=QString()
        QString line5;
        if(game::bpf.p1[pigFarm::rec-1].ifsell2)
        line5="\n\n\t这只小猪可以出售了";
        else
        {
        line5="\n\n\t这只小猪还不能出售";
        }
        QString sum;
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
        sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index1_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index1_2].starvation,10)+
            line5;
        }
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
        sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index1_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index1_2].starvation)+
            line5;
        }
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
        sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index1_2].weight)+
            line4_1+QString::number(buyPig::vh[Index1_2].starvation)+
            line5;
        }
        ui->textEdit->setText(sum);
        }
        else    //comb1rec!=0
        {
        line3="\n\n\t该栏有";
        QString line4="\n\n\t小猪重量：";
        QString line5;
    if(game::bpf.p1[pigFarm::rec-1].ifsell1)
        line5="\n\n\t这只小猪可以出售了";
    else
    {
        line5="\n\n\t这只小猪还不能出售";
    }
    QString sum;
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
    {
    sum=line1+num+
        line2+
        line3+game::bpf.p1[pigFarm::rec-1].pigName1+
        line4+QString::number(buyPig::vw[Index1_1].weight,10)+
        line4_1+QString::number(buyPig::vw[Index1_1].starvation,10)+
        line5;
//    qDebug()<<"IndexNum:"<<Index1_1;
//    qDebug()<<"vw[0]:"<<buyPig::vw[0].weight<<buyPig::vw[0].starvation;
    }
    else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
    {
    sum=line1+num+
        line2+
        line3+game::bpf.p1[pigFarm::rec-1].pigName1+
        line4+QString::number(buyPig::vb[Index1_1].weight,10)+
        line4_1+QString::number(buyPig::vb[Index1_1].starvation,10)+
        line5;
    }
    else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
    {
    sum=line1+num+
        line2+
        line3+game::bpf.p1[pigFarm::rec-1].pigName1+
        line4+QString::number(buyPig::vh[Index1_1].weight,10)+
        line4_1+QString::number(buyPig::vh[Index1_1].starvation,10)+
        line5;
    }
    ui->textEdit->setText(sum);
        }
    }
    else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
    {
        line3="\n\n\t该栏有";
    QString line4="\n\n\t小猪重量：";
    QString line5;
    QString line6;
    QString sum;
    if(game::bpf.p1[pigFarm::rec-1].ifsell1)
    line5="\n\n\t这只小猪可以出售了";
    else
    {
        line5="\n\n\t这只小猪还不能出售";
    }
    if(game::bpf.p1[pigFarm::rec-1].ifsell2)
        line6="\n\n\t这只小猪可以出售了";
    else
    {
        line6="\n\n\t这只小猪还不能出售";
    }
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vw[Index1_1].weight,10)+
            line4_1+QString::number(buyPig::vw[Index1_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index1_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index1_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vw[Index1_1].weight,10)+
            line4_1+QString::number(buyPig::vw[Index1_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index1_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index1_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vw[Index1_1].weight,10)+
            line4_1+QString::number(buyPig::vw[Index1_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index1_2].weight,10)+
            line4_1+QString::number(buyPig::vh[Index1_2].starvation,10)+
            line6;}
    }
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vb[Index1_1].weight,10)+
            line4_1+QString::number(buyPig::vb[Index1_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index1_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index1_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vb[Index1_1].weight,10)+
            line4_1+QString::number(buyPig::vb[Index1_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index1_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index1_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vb[Index1_1].weight,10)+
            line4_1+QString::number(buyPig::vb[Index1_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index1_2].weight,10)+
            line4_1+QString::number(buyPig::vh[Index1_2].starvation,10)+
            line6;}
    }
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vh[Index1_1].weight,10)+
            line4_1+QString::number(buyPig::vh[Index1_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index1_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index1_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vh[Index1_1].weight,10)+
            line4_1+QString::number(buyPig::vh[Index1_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index1_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index1_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vh[Index1_1].weight,10)+
            line4_1+QString::number(buyPig::vh[Index1_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index1_2].weight,10)+
            line4_1+QString::number(buyPig::vh[Index1_2].starvation,10)+
            line6;

    }
    }
    ui->textEdit->setText(sum);
        }

        break;
        }
        case 2:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_4].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_4].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_4].weight)+
                    line4_1+QString::number(buyPig::vh[Index1_4].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index1_3].weight,10)+
                line4_1+QString::number(buyPig::vw[Index1_3].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index1_3].weight,10)+
                line4_1+QString::number(buyPig::vb[Index1_3].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index1_3].weight,10)+
                line4_1+QString::number(buyPig::vh[Index1_3].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index1_3].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index1_3].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index1_3].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_4].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_4].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index1_3].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index1_3].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index1_3].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_4].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_4].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index1_3].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index1_3].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index1_3].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_4].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_4].starvation,10)+
                    line6;

            }
            }
            ui->textEdit->setText(sum);
                }

            break;
        }
        case 3:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_6].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_6].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_6].weight)+
                    line4_1+QString::number(buyPig::vh[Index1_6].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index1_5].weight,10)+
                line4_1+QString::number(buyPig::vw[Index1_5].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index1_5].weight,10)+
                line4_1+QString::number(buyPig::vb[Index1_5].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index1_5].weight,10)+
                line4_1+QString::number(buyPig::vh[Index1_5].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index1_5].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index1_5].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index1_5].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_6].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_6].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index1_5].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index1_5].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index1_5].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_6].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_6].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index1_5].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index1_5].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index1_5].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_6].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_6].starvation,10)+
                    line6;

            }
            }
            ui->textEdit->setText(sum);
                }

            break;
        }
        case 4:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_8].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_8].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_8].weight)+
                    line4_1+QString::number(buyPig::vh[Index1_8].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index1_7].weight,10)+
                line4_1+QString::number(buyPig::vw[Index1_7].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index1_7].weight,10)+
                line4_1+QString::number(buyPig::vb[Index1_7].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index1_7].weight,10)+
                line4_1+QString::number(buyPig::vh[Index1_7].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index1_7].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index1_7].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index1_7].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_8].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_8].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index1_7].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index1_7].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index1_7].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_8].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_8].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index1_7].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index1_7].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index1_7].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_8].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_8].starvation,10)+
                    line6;

            }
            }
             ui->textEdit->setText(sum);
                }

            break;
        }
        case 5:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_10].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_10].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_10].weight)+
                    line4_1+QString::number(buyPig::vh[Index1_10].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index1_9].weight,10)+
                line4_1+QString::number(buyPig::vw[Index1_9].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index1_9].weight,10)+
                line4_1+QString::number(buyPig::vb[Index1_9].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index1_9].weight,10)+
                line4_1+QString::number(buyPig::vh[Index1_9].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index1_9].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index1_9].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index1_9].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_10].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_10].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index1_9].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index1_9].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index1_9].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_10].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_10].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index1_9].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index1_9].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index1_9].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_10].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_10].starvation,10)+
                    line6;

            }
            }
             ui->textEdit->setText(sum);
                }

            break;
        }
        case 6:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_12].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_12].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_12].weight)+
                    line4_1+QString::number(buyPig::vh[Index1_12].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index1_11].weight,10)+
                line4_1+QString::number(buyPig::vw[Index1_11].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index1_11].weight,10)+
                line4_1+QString::number(buyPig::vb[Index1_11].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index1_11].weight,10)+
                line4_1+QString::number(buyPig::vh[Index1_11].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index1_11].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index1_11].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index1_11].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_12].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_12].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index1_11].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index1_11].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index1_11].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_12].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_12].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index1_11].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index1_11].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index1_11].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_12].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index1_12].starvation,10)+
                    line6;

            }
            }
             ui->textEdit->setText(sum);
                }
            break;
        }
        }
    break;
    }
    case 2:
    {
        switch(pigFarm::rec)
        {
        case 1:
        {
    if(game::bpf.p2[pigFarm::rec-1].havePigNum==0)
    {
        line3="\n\t该栏里没有猪";
        ui->textEdit->setText(line1+num+
                              line2+
                              line3
                              );
    }
    else if(game::bpf.p2[pigFarm::rec-1].havePigNum==1)
    {
        if(game::bpf.p2[pigFarm::rec-1].comb1rec==0)
        {
            line3="\n\n\t该栏有";
        QString line4="\n\n\t小猪重量：";
//        QString line6=QString()
        QString line5;
        if(game::bpf.p2[pigFarm::rec-1].ifsell2)
        line5="\n\n\t这只小猪可以出售了";
        else
        {
        line5="\n\n\t这只小猪还不能出售";
        }
        QString sum;
        if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
        {
        sum=line1+num+
            line2+
            line3+game::bpf.p2[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index2_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index2_2].starvation,10)+
            line5;
        }
        else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
        {
        sum=line1+num+
            line2+
            line3+game::bpf.p2[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index2_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index2_2].starvation)+
            line5;
        }
        else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
        {
        sum=line1+num+
            line2+
            line3+game::bpf.p2[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index2_2].weight)+
            line4_1+QString::number(buyPig::vh[Index2_2].starvation)+
            line5;
        }
        ui->textEdit->setText(sum);
        }
        else    //comb1rec!=0
        {
        line3="\n\n\t该栏有";
        QString line4="\n\n\t小猪重量：";
        QString line5;
    if(game::bpf.p2[pigFarm::rec-1].ifsell1)
        line5="\n\n\t这只小猪可以出售了";
    else
    {
        line5="\n\n\t这只小猪还不能出售";
    }
    QString sum;
    if(game::bpf.p2[pigFarm::rec-1].comb1rec==1)
    {
    sum=line1+num+
        line2+
        line3+game::bpf.p2[pigFarm::rec-1].pigName1+
        line4+QString::number(buyPig::vw[Index2_1].weight,10)+
        line4_1+QString::number(buyPig::vw[Index2_1].starvation,10)+
        line5;
//    qDebug()<<"IndexNum:"<<Index2_1;
//    qDebug()<<"vw[0]:"<<buyPig::vw[0].weight<<buyPig::vw[0].starvation;
    }
    else if(game::bpf.p2[pigFarm::rec-1].comb1rec==2)
    {
    sum=line1+num+
        line2+
        line3+game::bpf.p2[pigFarm::rec-1].pigName1+
        line4+QString::number(buyPig::vb[Index2_1].weight,10)+
        line4_1+QString::number(buyPig::vb[Index2_1].starvation,10)+
        line5;
    }
    else if(game::bpf.p2[pigFarm::rec-1].comb1rec==3)
    {
    sum=line1+num+
        line2+
        line3+game::bpf.p2[pigFarm::rec-1].pigName1+
        line4+QString::number(buyPig::vh[Index2_1].weight,10)+
        line4_1+QString::number(buyPig::vh[Index2_1].starvation,10)+
        line5;
    }
    ui->textEdit->setText(sum);
        }
    }
    else if(game::bpf.p2[pigFarm::rec-1].havePigNum==2)
    {
        line3="\n\n\t该栏有";
    QString line4="\n\n\t小猪重量：";
    QString line5;
    QString line6;
    QString sum;
    if(game::bpf.p2[pigFarm::rec-1].ifsell1)
    line5="\n\n\t这只小猪可以出售了";
    else
    {
        line5="\n\n\t这只小猪还不能出售";
    }
    if(game::bpf.p2[pigFarm::rec-1].ifsell2)
        line6="\n\n\t这只小猪可以出售了";
    else
    {
        line6="\n\n\t这只小猪还不能出售";
    }
    if(game::bpf.p2[pigFarm::rec-1].comb1rec==1)
    {
        if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p2[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vw[Index2_1].weight,10)+
            line4_1+QString::number(buyPig::vw[Index2_1].starvation,10)+
            line5+
            line3+game::bpf.p2[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index2_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index2_2].starvation,10)+
            line6;}
        else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p2[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vw[Index2_1].weight,10)+
            line4_1+QString::number(buyPig::vw[Index2_1].starvation,10)+
            line5+
            line3+game::bpf.p2[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index2_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index2_2].starvation,10)+
            line6;}
        else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p2[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vw[Index2_1].weight,10)+
            line4_1+QString::number(buyPig::vw[Index2_1].starvation,10)+
            line5+
            line3+game::bpf.p2[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index2_2].weight,10)+
            line4_1+QString::number(buyPig::vh[Index2_2].starvation,10)+
            line6;}
    }
    if(game::bpf.p2[pigFarm::rec-1].comb1rec==2)
    {
        if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p2[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vb[Index2_1].weight,10)+
            line4_1+QString::number(buyPig::vb[Index2_1].starvation,10)+
            line5+
            line3+game::bpf.p2[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index2_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index2_2].starvation,10)+
            line6;}
        else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p2[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vb[Index2_1].weight,10)+
            line4_1+QString::number(buyPig::vb[Index2_1].starvation,10)+
            line5+
            line3+game::bpf.p2[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index2_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index2_2].starvation,10)+
            line6;}
        else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p2[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vb[Index2_1].weight,10)+
            line4_1+QString::number(buyPig::vb[Index2_1].starvation,10)+
            line5+
            line3+game::bpf.p2[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index2_2].weight,10)+
            line4_1+QString::number(buyPig::vh[Index2_2].starvation,10)+
            line6;}
    }
    if(game::bpf.p2[pigFarm::rec-1].comb1rec==3)
    {
        if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p2[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vh[Index2_1].weight,10)+
            line4_1+QString::number(buyPig::vh[Index2_1].starvation,10)+
            line5+
            line3+game::bpf.p2[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index2_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index2_2].starvation,10)+
            line6;}
        else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p2[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vh[Index2_1].weight,10)+
            line4_1+QString::number(buyPig::vh[Index2_1].starvation,10)+
            line5+
            line3+game::bpf.p2[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index2_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index2_2].starvation,10)+
            line6;}
        else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p2[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vh[Index2_1].weight,10)+
            line4_1+QString::number(buyPig::vh[Index2_1].starvation,10)+
            line5+
            line3+game::bpf.p2[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index2_2].weight,10)+
            line4_1+QString::number(buyPig::vh[Index2_2].starvation,10)+
            line6;

    }
    }
     ui->textEdit->setText(sum);
        }

        break;
        }
        case 2:
        {
            if(game::bpf.p2[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p2[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p2[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_4].starvation,10)+
                    line5;
                }
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_4].starvation)+
                    line5;
                }
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_4].weight)+
                    line4_1+QString::number(buyPig::vh[Index2_4].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p2[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index2_3].weight,10)+
                line4_1+QString::number(buyPig::vw[Index2_3].starvation,10)+
                line5;
            }
            else if(game::bpf.p2[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index2_3].weight,10)+
                line4_1+QString::number(buyPig::vb[Index2_3].starvation,10)+
                line5;
            }
            else if(game::bpf.p2[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index2_3].weight,10)+
                line4_1+QString::number(buyPig::vh[Index2_3].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p2[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p2[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p2[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index2_3].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_3].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_4].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index2_3].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_3].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_4].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index2_3].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_3].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_4].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_4].starvation,10)+
                    line6;}
            }
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index2_3].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_3].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_4].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index2_3].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_3].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_4].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index2_3].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_3].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_4].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_4].starvation,10)+
                    line6;}
            }
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index2_3].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_3].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_4].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index2_3].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_3].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_4].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index2_3].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_3].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_4].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_4].starvation,10)+
                    line6;

            }
            }
             ui->textEdit->setText(sum);
                }

            break;
        }
        case 3:
        {
            if(game::bpf.p2[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p2[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p2[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_6].starvation,10)+
                    line5;
                }
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_6].starvation)+
                    line5;
                }
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_6].weight)+
                    line4_1+QString::number(buyPig::vh[Index2_6].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p2[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index2_5].weight,10)+
                line4_1+QString::number(buyPig::vw[Index2_5].starvation,10)+
                line5;
            }
            else if(game::bpf.p2[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index2_5].weight,10)+
                line4_1+QString::number(buyPig::vb[Index2_5].starvation,10)+
                line5;
            }
            else if(game::bpf.p2[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index2_5].weight,10)+
                line4_1+QString::number(buyPig::vh[Index2_5].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p2[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p2[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p2[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index2_5].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_5].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_6].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index2_5].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_5].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_6].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index2_5].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_5].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_6].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_6].starvation,10)+
                    line6;}
            }
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index2_5].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_5].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_6].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index2_5].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_5].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_6].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index2_5].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_5].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_6].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_6].starvation,10)+
                    line6;}
            }
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index2_5].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_5].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_6].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index2_5].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_5].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_6].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index2_5].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_5].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_6].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_6].starvation,10)+
                    line6;

            }
            }
             ui->textEdit->setText(sum);
                }

            break;
        }
        case 4:
        {
            if(game::bpf.p2[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p2[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p2[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_8].starvation,10)+
                    line5;
                }
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_8].starvation)+
                    line5;
                }
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_8].weight)+
                    line4_1+QString::number(buyPig::vh[Index2_8].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p2[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index2_7].weight,10)+
                line4_1+QString::number(buyPig::vw[Index2_7].starvation,10)+
                line5;
            }
            else if(game::bpf.p2[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index2_7].weight,10)+
                line4_1+QString::number(buyPig::vb[Index2_7].starvation,10)+
                line5;
            }
            else if(game::bpf.p2[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index2_7].weight,10)+
                line4_1+QString::number(buyPig::vh[Index2_7].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p2[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p2[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p2[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index2_7].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_7].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_8].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index2_7].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_7].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_8].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index2_7].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_7].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_8].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_8].starvation,10)+
                    line6;}
            }
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index2_7].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_7].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_8].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index2_7].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_7].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_8].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index2_7].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_7].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_8].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_8].starvation,10)+
                    line6;}
            }
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index2_7].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_7].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_8].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index2_7].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_7].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_8].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index2_7].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_7].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_8].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_8].starvation,10)+
                    line6;

            }
            }
             ui->textEdit->setText(sum);
                }

            break;
        }
        case 5:
        {
            if(game::bpf.p2[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p2[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p2[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_10].starvation,10)+
                    line5;
                }
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_10].starvation)+
                    line5;
                }
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_10].weight)+
                    line4_1+QString::number(buyPig::vh[Index2_10].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p2[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index2_9].weight,10)+
                line4_1+QString::number(buyPig::vw[Index2_9].starvation,10)+
                line5;
            }
            else if(game::bpf.p2[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index2_9].weight,10)+
                line4_1+QString::number(buyPig::vb[Index2_9].starvation,10)+
                line5;
            }
            else if(game::bpf.p2[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index2_9].weight,10)+
                line4_1+QString::number(buyPig::vh[Index2_9].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p2[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p2[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p2[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index2_9].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_9].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_10].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index2_9].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_9].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_10].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index2_9].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_9].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_10].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_10].starvation,10)+
                    line6;}
            }
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index2_9].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_9].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_10].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index2_9].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_9].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_10].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index2_9].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_9].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_10].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_10].starvation,10)+
                    line6;}
            }
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index2_9].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_9].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_10].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index2_9].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_9].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_10].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index2_9].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_9].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_10].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_10].starvation,10)+
                    line6;

            }
            }
             ui->textEdit->setText(sum);
                }

            break;
        }
        case 6:
        {
            if(game::bpf.p2[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p2[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p2[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_12].starvation,10)+
                    line5;
                }
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_12].starvation)+
                    line5;
                }
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_12].weight)+
                    line4_1+QString::number(buyPig::vh[Index2_12].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p2[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index2_11].weight,10)+
                line4_1+QString::number(buyPig::vw[Index2_11].starvation,10)+
                line5;
            }
            else if(game::bpf.p2[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index2_11].weight,10)+
                line4_1+QString::number(buyPig::vb[Index2_11].starvation,10)+
                line5;
            }
            else if(game::bpf.p2[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index2_11].weight,10)+
                line4_1+QString::number(buyPig::vh[Index2_11].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p2[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p2[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p2[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index2_11].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_11].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_12].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index2_11].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_11].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_12].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index2_11].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_11].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_12].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_12].starvation,10)+
                    line6;}
            }
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index2_11].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_11].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_12].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index2_11].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_11].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_12].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index2_11].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_11].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_12].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_12].starvation,10)+
                    line6;}
            }
            if(game::bpf.p2[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p2[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index2_11].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_11].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index2_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index2_12].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index2_11].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_11].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index2_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index2_12].starvation,10)+
                    line6;}
                else if(game::bpf.p2[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index2_11].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_11].starvation,10)+
                    line5+
                    line3+game::bpf.p2[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index2_12].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index2_12].starvation,10)+
                    line6;

            }
            }
             ui->textEdit->setText(sum);
                }
            break;
        }
        }
    break;
    }
    case 3:
    {
        switch(pigFarm::rec)
        {
        case 1:
        {
    if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
    {
        line3="\n\t该栏里没有猪";
        ui->textEdit->setText(line1+num+
                              line2+
                              line3
                              );
    }
    else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
        {
            line3="\n\n\t该栏有";
        QString line4="\n\n\t小猪重量：";
//        QString line6=QString()
        QString line5;
        if(game::bpf.p1[pigFarm::rec-1].ifsell2)
        line5="\n\n\t这只小猪可以出售了";
        else
        {
        line5="\n\n\t这只小猪还不能出售";
        }
        QString sum;
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
        sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index3_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index3_2].starvation,10)+
            line5;
        }
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
        sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index3_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index3_2].starvation)+
            line5;
        }
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
        sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index3_2].weight)+
            line4_1+QString::number(buyPig::vh[Index3_2].starvation)+
            line5;
        }
        ui->textEdit->setText(sum);
        }
        else    //comb1rec!=0
        {
        line3="\n\n\t该栏有";
        QString line4="\n\n\t小猪重量：";
        QString line5;
    if(game::bpf.p1[pigFarm::rec-1].ifsell1)
        line5="\n\n\t这只小猪可以出售了";
    else
    {
        line5="\n\n\t这只小猪还不能出售";
    }
    QString sum;
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
    {
    sum=line1+num+
        line2+
        line3+game::bpf.p1[pigFarm::rec-1].pigName1+
        line4+QString::number(buyPig::vw[Index3_1].weight,10)+
        line4_1+QString::number(buyPig::vw[Index3_1].starvation,10)+
        line5;
    }
    else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
    {
    sum=line1+num+
        line2+
        line3+game::bpf.p1[pigFarm::rec-1].pigName1+
        line4+QString::number(buyPig::vb[Index3_1].weight,10)+
        line4_1+QString::number(buyPig::vb[Index3_1].starvation,10)+
        line5;
    }
    else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
    {
    sum=line1+num+
        line2+
        line3+game::bpf.p1[pigFarm::rec-1].pigName1+
        line4+QString::number(buyPig::vh[Index3_1].weight,10)+
        line4_1+QString::number(buyPig::vh[Index3_1].starvation,10)+
        line5;
    }
    ui->textEdit->setText(sum);
        }
    }
    else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
    {
        line3="\n\n\t该栏有";
    QString line4="\n\n\t小猪重量：";
    QString line5;
    QString line6;
    QString sum;
    if(game::bpf.p1[pigFarm::rec-1].ifsell1)
    line5="\n\n\t这只小猪可以出售了";
    else
    {
        line5="\n\n\t这只小猪还不能出售";
    }
    if(game::bpf.p1[pigFarm::rec-1].ifsell2)
        line6="\n\n\t这只小猪可以出售了";
    else
    {
        line6="\n\n\t这只小猪还不能出售";
    }
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vw[Index3_1].weight,10)+
            line4_1+QString::number(buyPig::vw[Index3_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index3_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index3_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vw[Index3_1].weight,10)+
            line4_1+QString::number(buyPig::vw[Index3_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index3_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index3_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vw[Index3_1].weight,10)+
            line4_1+QString::number(buyPig::vw[Index3_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index3_2].weight,10)+
            line4_1+QString::number(buyPig::vh[Index3_2].starvation,10)+
            line6;}
    }
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vb[Index3_1].weight,10)+
            line4_1+QString::number(buyPig::vb[Index3_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index3_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index3_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vb[Index3_1].weight,10)+
            line4_1+QString::number(buyPig::vb[Index3_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index3_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index3_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vb[Index3_1].weight,10)+
            line4_1+QString::number(buyPig::vb[Index3_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index3_2].weight,10)+
            line4_1+QString::number(buyPig::vh[Index3_2].starvation,10)+
            line6;}
    }
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vh[Index3_1].weight,10)+
            line4_1+QString::number(buyPig::vh[Index3_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index3_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index3_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vh[Index3_1].weight,10)+
            line4_1+QString::number(buyPig::vh[Index3_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index3_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index3_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vh[Index3_1].weight,10)+
            line4_1+QString::number(buyPig::vh[Index3_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index3_2].weight,10)+
            line4_1+QString::number(buyPig::vh[Index3_2].starvation,10)+
            line6;

    }
    }
     ui->textEdit->setText(sum);
        }

        break;
        }
        case 2:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_4].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_4].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_4].weight)+
                    line4_1+QString::number(buyPig::vh[Index3_4].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index3_3].weight,10)+
                line4_1+QString::number(buyPig::vw[Index3_3].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index3_3].weight,10)+
                line4_1+QString::number(buyPig::vb[Index3_3].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index3_3].weight,10)+
                line4_1+QString::number(buyPig::vh[Index3_3].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index3_3].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index3_3].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index3_3].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_4].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_4].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index3_3].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index3_3].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index3_3].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_4].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_4].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index3_3].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index3_3].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index3_3].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_4].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_4].starvation,10)+
                    line6;

            }
            }
             ui->textEdit->setText(sum);
                }

            break;
        }
        case 3:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_6].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_6].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_6].weight)+
                    line4_1+QString::number(buyPig::vh[Index3_6].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index3_5].weight,10)+
                line4_1+QString::number(buyPig::vw[Index3_5].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index3_5].weight,10)+
                line4_1+QString::number(buyPig::vb[Index3_5].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index3_5].weight,10)+
                line4_1+QString::number(buyPig::vh[Index3_5].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index3_5].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index3_5].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index3_5].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_6].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_6].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index3_5].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index3_5].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index3_5].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_6].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_6].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index3_5].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index3_5].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index3_5].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_6].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_6].starvation,10)+
                    line6;

            }
            }
             ui->textEdit->setText(sum);
                }

            break;
        }
        case 4:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_8].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_8].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_8].weight)+
                    line4_1+QString::number(buyPig::vh[Index3_8].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index3_7].weight,10)+
                line4_1+QString::number(buyPig::vw[Index3_7].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index3_7].weight,10)+
                line4_1+QString::number(buyPig::vb[Index3_7].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index3_7].weight,10)+
                line4_1+QString::number(buyPig::vh[Index3_7].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index3_7].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index3_7].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index3_7].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_8].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_8].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index3_7].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index3_7].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index3_7].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_8].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_8].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index3_7].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index3_7].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index3_7].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_8].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_8].starvation,10)+
                    line6;

            }
            }
            ui->textEdit->setText(sum);
                }

            break;
        }
        case 5:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_10].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_10].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_10].weight)+
                    line4_1+QString::number(buyPig::vh[Index3_10].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index3_9].weight,10)+
                line4_1+QString::number(buyPig::vw[Index3_9].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index3_9].weight,10)+
                line4_1+QString::number(buyPig::vb[Index3_9].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index3_9].weight,10)+
                line4_1+QString::number(buyPig::vh[Index3_9].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index3_9].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index3_9].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index3_9].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_10].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_10].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index3_9].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index3_9].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index3_9].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_10].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_10].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index3_9].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index3_9].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index3_9].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_10].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_10].starvation,10)+
                    line6;

            }
            }
             ui->textEdit->setText(sum);
                }

            break;
        }
        case 6:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_12].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_12].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_12].weight)+
                    line4_1+QString::number(buyPig::vh[Index3_12].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index3_11].weight,10)+
                line4_1+QString::number(buyPig::vw[Index3_11].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index3_11].weight,10)+
                line4_1+QString::number(buyPig::vb[Index3_11].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index3_11].weight,10)+
                line4_1+QString::number(buyPig::vh[Index3_11].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index3_11].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index3_11].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index3_11].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_12].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_12].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index3_11].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index3_11].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index3_11].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_12].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_12].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index3_11].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index3_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index3_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index3_11].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index3_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index3_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index3_11].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index3_12].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index3_12].starvation,10)+
                    line6;

            }
            }
             ui->textEdit->setText(sum);
                }
            break;
        }
        }
    break;
    }
    case 4:
    {
        switch(pigFarm::rec)
        {
        case 1:
        {
    if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
    {
        line3="\n\t该栏里没有猪";
        ui->textEdit->setText(line1+num+
                              line2+
                              line3
                              );
    }
    else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
        {
            line3="\n\n\t该栏有";
        QString line4="\n\n\t小猪重量：";
//        QString line6=QString()
        QString line5;
        if(game::bpf.p1[pigFarm::rec-1].ifsell2)
        line5="\n\n\t这只小猪可以出售了";
        else
        {
        line5="\n\n\t这只小猪还不能出售";
        }
        QString sum;
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
        sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index4_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index4_2].starvation,10)+
            line5;
        }
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
        sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index4_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index4_2].starvation)+
            line5;
        }
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
        sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index4_2].weight)+
            line4_1+QString::number(buyPig::vh[Index4_2].starvation)+
            line5;
        }
        ui->textEdit->setText(sum);
        }
        else    //comb1rec!=0
        {
        line3="\n\n\t该栏有";
        QString line4="\n\n\t小猪重量：";
        QString line5;
    if(game::bpf.p1[pigFarm::rec-1].ifsell1)
        line5="\n\n\t这只小猪可以出售了";
    else
    {
        line5="\n\n\t这只小猪还不能出售";
    }
    QString sum;
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
    {
    sum=line1+num+
        line2+
        line3+game::bpf.p1[pigFarm::rec-1].pigName1+
        line4+QString::number(buyPig::vw[Index4_1].weight,10)+
        line4_1+QString::number(buyPig::vw[Index4_1].starvation,10)+
        line5;
//    qDebug()<<"IndexNum:"<<Index4_1;
//    qDebug()<<"vw[0]:"<<buyPig::vw[0].weight<<buyPig::vw[0].starvation;
    }
    else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
    {
    sum=line1+num+
        line2+
        line3+game::bpf.p1[pigFarm::rec-1].pigName1+
        line4+QString::number(buyPig::vb[Index4_1].weight,10)+
        line4_1+QString::number(buyPig::vb[Index4_1].starvation,10)+
        line5;
    }
    else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
    {
    sum=line1+num+
        line2+
        line3+game::bpf.p1[pigFarm::rec-1].pigName1+
        line4+QString::number(buyPig::vh[Index4_1].weight,10)+
        line4_1+QString::number(buyPig::vh[Index4_1].starvation,10)+
        line5;
    }
    ui->textEdit->setText(sum);
        }
    }
    else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
    {
        line3="\n\n\t该栏有";
    QString line4="\n\n\t小猪重量：";
    QString line5;
    QString line6;
    QString sum;
    if(game::bpf.p1[pigFarm::rec-1].ifsell1)
    line5="\n\n\t这只小猪可以出售了";
    else
    {
        line5="\n\n\t这只小猪还不能出售";
    }
    if(game::bpf.p1[pigFarm::rec-1].ifsell2)
        line6="\n\n\t这只小猪可以出售了";
    else
    {
        line6="\n\n\t这只小猪还不能出售";
    }
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vw[Index4_1].weight,10)+
            line4_1+QString::number(buyPig::vw[Index4_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index4_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index4_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vw[Index4_1].weight,10)+
            line4_1+QString::number(buyPig::vw[Index4_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index4_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index4_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vw[Index4_1].weight,10)+
            line4_1+QString::number(buyPig::vw[Index4_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index4_2].weight,10)+
            line4_1+QString::number(buyPig::vh[Index4_2].starvation,10)+
            line6;}
    }
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vb[Index4_1].weight,10)+
            line4_1+QString::number(buyPig::vb[Index4_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index4_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index4_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vb[Index4_1].weight,10)+
            line4_1+QString::number(buyPig::vb[Index4_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index4_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index4_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vb[Index4_1].weight,10)+
            line4_1+QString::number(buyPig::vb[Index4_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index4_2].weight,10)+
            line4_1+QString::number(buyPig::vh[Index4_2].starvation,10)+
            line6;}
    }
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vh[Index4_1].weight,10)+
            line4_1+QString::number(buyPig::vh[Index4_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index4_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index4_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vh[Index4_1].weight,10)+
            line4_1+QString::number(buyPig::vh[Index4_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index4_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index4_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vh[Index4_1].weight,10)+
            line4_1+QString::number(buyPig::vh[Index4_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index4_2].weight,10)+
            line4_1+QString::number(buyPig::vh[Index4_2].starvation,10)+
            line6;

    }
    }
 ui->textEdit->setText(sum);
        }

        break;
        }
        case 2:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_4].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_4].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_4].weight)+
                    line4_1+QString::number(buyPig::vh[Index4_4].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index4_3].weight,10)+
                line4_1+QString::number(buyPig::vw[Index4_3].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index4_3].weight,10)+
                line4_1+QString::number(buyPig::vb[Index4_3].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index4_3].weight,10)+
                line4_1+QString::number(buyPig::vh[Index4_3].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index4_3].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index4_3].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index4_3].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_4].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_4].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index4_3].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index4_3].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index4_3].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_4].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_4].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index4_3].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index4_3].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index4_3].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_4].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_4].starvation,10)+
                    line6;

            }
            }
 ui->textEdit->setText(sum);
                }

            break;
        }
        case 3:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_6].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_6].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_6].weight)+
                    line4_1+QString::number(buyPig::vh[Index4_6].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index4_5].weight,10)+
                line4_1+QString::number(buyPig::vw[Index4_5].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index4_5].weight,10)+
                line4_1+QString::number(buyPig::vb[Index4_5].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index4_5].weight,10)+
                line4_1+QString::number(buyPig::vh[Index4_5].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index4_5].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index4_5].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index4_5].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_6].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_6].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index4_5].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index4_5].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index4_5].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_6].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_6].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index4_5].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index4_5].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index4_5].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_6].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_6].starvation,10)+
                    line6;

            }
            }
 ui->textEdit->setText(sum);
                }

            break;
        }
        case 4:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_8].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_8].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_8].weight)+
                    line4_1+QString::number(buyPig::vh[Index4_8].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index4_7].weight,10)+
                line4_1+QString::number(buyPig::vw[Index4_7].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index4_7].weight,10)+
                line4_1+QString::number(buyPig::vb[Index4_7].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index4_7].weight,10)+
                line4_1+QString::number(buyPig::vh[Index4_7].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index4_7].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index4_7].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index4_7].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_8].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_8].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index4_7].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index4_7].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index4_7].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_8].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_8].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index4_7].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index4_7].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index4_7].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_8].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_8].starvation,10)+
                    line6;

            }
            }

                }

            break;
        }
        case 5:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_10].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_10].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_10].weight)+
                    line4_1+QString::number(buyPig::vh[Index4_10].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index4_9].weight,10)+
                line4_1+QString::number(buyPig::vw[Index4_9].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index4_9].weight,10)+
                line4_1+QString::number(buyPig::vb[Index4_9].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index4_9].weight,10)+
                line4_1+QString::number(buyPig::vh[Index4_9].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index4_9].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index4_9].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index4_9].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_10].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_10].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index4_9].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index4_9].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index4_9].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_10].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_10].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index4_9].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index4_9].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index4_9].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_10].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_10].starvation,10)+
                    line6;

            }
            }

                }

            break;
        }
        case 6:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_12].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_12].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_12].weight)+
                    line4_1+QString::number(buyPig::vh[Index4_12].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index4_11].weight,10)+
                line4_1+QString::number(buyPig::vw[Index4_11].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index4_11].weight,10)+
                line4_1+QString::number(buyPig::vb[Index4_11].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index4_11].weight,10)+
                line4_1+QString::number(buyPig::vh[Index4_11].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index4_11].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index4_11].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index4_11].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_12].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_12].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index4_11].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index4_11].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index4_11].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_12].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_12].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index4_11].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index4_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index4_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index4_11].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index4_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index4_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index4_11].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index4_12].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index4_12].starvation,10)+
                    line6;

            }
            }

                }
            break;
        }
        }
    break;
    }
    case 5:
    {
        switch(pigFarm::rec)
        {
        case 1:
        {
    if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
    {
        line3="\n\t该栏里没有猪";
        ui->textEdit->setText(line1+num+
                              line2+
                              line3
                              );
    }
    else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
        {
            line3="\n\n\t该栏有";
        QString line4="\n\n\t小猪重量：";
//        QString line6=QString()
        QString line5;
        if(game::bpf.p1[pigFarm::rec-1].ifsell2)
        line5="\n\n\t这只小猪可以出售了";
        else
        {
        line5="\n\n\t这只小猪还不能出售";
        }
        QString sum;
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
        sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index5_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index5_2].starvation,10)+
            line5;
        }
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
        sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index5_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index5_2].starvation)+
            line5;
        }
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
        sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index5_2].weight)+
            line4_1+QString::number(buyPig::vh[Index5_2].starvation)+
            line5;
        }
        ui->textEdit->setText(sum);
        }
        else    //comb1rec!=0
        {
        line3="\n\n\t该栏有";
        QString line4="\n\n\t小猪重量：";
        QString line5;
    if(game::bpf.p1[pigFarm::rec-1].ifsell1)
        line5="\n\n\t这只小猪可以出售了";
    else
    {
        line5="\n\n\t这只小猪还不能出售";
    }
    QString sum;
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
    {
    sum=line1+num+
        line2+
        line3+game::bpf.p1[pigFarm::rec-1].pigName1+
        line4+QString::number(buyPig::vw[Index5_1].weight,10)+
        line4_1+QString::number(buyPig::vw[Index5_1].starvation,10)+
        line5;
//    qDebug()<<"IndexNum:"<<Index5_1;
//    qDebug()<<"vw[0]:"<<buyPig::vw[0].weight<<buyPig::vw[0].starvation;
    }
    else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
    {
    sum=line1+num+
        line2+
        line3+game::bpf.p1[pigFarm::rec-1].pigName1+
        line4+QString::number(buyPig::vb[Index5_1].weight,10)+
        line4_1+QString::number(buyPig::vb[Index5_1].starvation,10)+
        line5;
    }
    else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
    {
    sum=line1+num+
        line2+
        line3+game::bpf.p1[pigFarm::rec-1].pigName1+
        line4+QString::number(buyPig::vh[Index5_1].weight,10)+
        line4_1+QString::number(buyPig::vh[Index5_1].starvation,10)+
        line5;
    }
    ui->textEdit->setText(sum);
        }
    }
    else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
    {
        line3="\n\n\t该栏有";
    QString line4="\n\n\t小猪重量：";
    QString line5;
    QString line6;
    QString sum;
    if(game::bpf.p1[pigFarm::rec-1].ifsell1)
    line5="\n\n\t这只小猪可以出售了";
    else
    {
        line5="\n\n\t这只小猪还不能出售";
    }
    if(game::bpf.p1[pigFarm::rec-1].ifsell2)
        line6="\n\n\t这只小猪可以出售了";
    else
    {
        line6="\n\n\t这只小猪还不能出售";
    }
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vw[Index5_1].weight,10)+
            line4_1+QString::number(buyPig::vw[Index5_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index5_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index5_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vw[Index5_1].weight,10)+
            line4_1+QString::number(buyPig::vw[Index5_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index5_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index5_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vw[Index5_1].weight,10)+
            line4_1+QString::number(buyPig::vw[Index5_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index5_2].weight,10)+
            line4_1+QString::number(buyPig::vh[Index5_2].starvation,10)+
            line6;}
    }
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vb[Index5_1].weight,10)+
            line4_1+QString::number(buyPig::vb[Index5_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index5_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index5_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vb[Index5_1].weight,10)+
            line4_1+QString::number(buyPig::vb[Index5_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index5_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index5_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vb[Index5_1].weight,10)+
            line4_1+QString::number(buyPig::vb[Index5_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index5_2].weight,10)+
            line4_1+QString::number(buyPig::vh[Index5_2].starvation,10)+
            line6;}
    }
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vh[Index5_1].weight,10)+
            line4_1+QString::number(buyPig::vh[Index5_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index5_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index5_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vh[Index5_1].weight,10)+
            line4_1+QString::number(buyPig::vh[Index5_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index5_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index5_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vh[Index5_1].weight,10)+
            line4_1+QString::number(buyPig::vh[Index5_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index5_2].weight,10)+
            line4_1+QString::number(buyPig::vh[Index5_2].starvation,10)+
            line6;

    }
    }
 ui->textEdit->setText(sum);
        }

        break;
        }
        case 2:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_4].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_4].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_4].weight)+
                    line4_1+QString::number(buyPig::vh[Index5_4].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index5_3].weight,10)+
                line4_1+QString::number(buyPig::vw[Index5_3].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index5_3].weight,10)+
                line4_1+QString::number(buyPig::vb[Index5_3].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index5_3].weight,10)+
                line4_1+QString::number(buyPig::vh[Index5_3].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index5_3].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index5_3].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index5_3].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_4].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_4].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index5_3].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index5_3].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index5_3].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_4].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_4].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index5_3].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index5_3].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index5_3].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_4].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_4].starvation,10)+
                    line6;

            }
            }
 ui->textEdit->setText(sum);
                }

            break;
        }
        case 3:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_6].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_6].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_6].weight)+
                    line4_1+QString::number(buyPig::vh[Index5_6].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index5_5].weight,10)+
                line4_1+QString::number(buyPig::vw[Index5_5].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index5_5].weight,10)+
                line4_1+QString::number(buyPig::vb[Index5_5].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index5_5].weight,10)+
                line4_1+QString::number(buyPig::vh[Index5_5].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index5_5].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index5_5].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index5_5].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_6].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_6].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index5_5].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index5_5].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index5_5].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_6].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_6].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index5_5].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index5_5].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index5_5].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_6].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_6].starvation,10)+
                    line6;

            }
            }

                }

            break;
        }
        case 4:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_8].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_8].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_8].weight)+
                    line4_1+QString::number(buyPig::vh[Index5_8].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index5_7].weight,10)+
                line4_1+QString::number(buyPig::vw[Index5_7].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index5_7].weight,10)+
                line4_1+QString::number(buyPig::vb[Index5_7].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index5_7].weight,10)+
                line4_1+QString::number(buyPig::vh[Index5_7].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index5_7].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index5_7].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index5_7].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_8].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_8].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index5_7].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index5_7].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index5_7].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_8].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_8].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index5_7].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index5_7].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index5_7].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_8].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_8].starvation,10)+
                    line6;

            }
            }
 ui->textEdit->setText(sum);
                }

            break;
        }
        case 5:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_10].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_10].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_10].weight)+
                    line4_1+QString::number(buyPig::vh[Index5_10].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index5_9].weight,10)+
                line4_1+QString::number(buyPig::vw[Index5_9].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index5_9].weight,10)+
                line4_1+QString::number(buyPig::vb[Index5_9].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index5_9].weight,10)+
                line4_1+QString::number(buyPig::vh[Index5_9].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index5_9].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index5_9].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index5_9].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_10].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_10].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index5_9].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index5_9].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index5_9].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_10].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_10].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index5_9].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index5_9].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index5_9].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_10].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_10].starvation,10)+
                    line6;

            }
            }
 ui->textEdit->setText(sum);
                }

            break;
        }
        case 6:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_12].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_12].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_12].weight)+
                    line4_1+QString::number(buyPig::vh[Index5_12].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index5_11].weight,10)+
                line4_1+QString::number(buyPig::vw[Index5_11].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index5_11].weight,10)+
                line4_1+QString::number(buyPig::vb[Index5_11].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index5_11].weight,10)+
                line4_1+QString::number(buyPig::vh[Index5_11].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index5_11].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index5_11].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index5_11].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_12].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_12].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index5_11].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index5_11].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index5_11].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_12].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_12].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index5_11].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index5_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index5_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index5_11].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index5_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index5_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index5_11].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index5_12].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index5_12].starvation,10)+
                    line6;

            }
            }
 ui->textEdit->setText(sum);
                }
            break;
        }
        }
    break;
    }
    case 6:
    {
        switch(pigFarm::rec)
        {
        case 1:
        {
    if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
    {
        line3="\n\t该栏里没有猪";
        ui->textEdit->setText(line1+num+
                              line2+
                              line3
                              );
    }
    else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
        {
            line3="\n\n\t该栏有";
        QString line4="\n\n\t小猪重量：";
//        QString line6=QString()
        QString line5;
        if(game::bpf.p1[pigFarm::rec-1].ifsell2)
        line5="\n\n\t这只小猪可以出售了";
        else
        {
        line5="\n\n\t这只小猪还不能出售";
        }
        QString sum;
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
        sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index1_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index1_2].starvation,10)+
            line5;
        }
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
        sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index1_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index1_2].starvation)+
            line5;
        }
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
        sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index1_2].weight)+
            line4_1+QString::number(buyPig::vh[Index1_2].starvation)+
            line5;
        }
        ui->textEdit->setText(sum);
        }
        else    //comb1rec!=0
        {
        line3="\n\n\t该栏有";
        QString line4="\n\n\t小猪重量：";
        QString line5;
    if(game::bpf.p1[pigFarm::rec-1].ifsell1)
        line5="\n\n\t这只小猪可以出售了";
    else
    {
        line5="\n\n\t这只小猪还不能出售";
    }
    QString sum;
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
    {
    sum=line1+num+
        line2+
        line3+game::bpf.p1[pigFarm::rec-1].pigName1+
        line4+QString::number(buyPig::vw[Index6_1].weight,10)+
        line4_1+QString::number(buyPig::vw[Index6_1].starvation,10)+
        line5;
    }
    else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
    {
    sum=line1+num+
        line2+
        line3+game::bpf.p1[pigFarm::rec-1].pigName1+
        line4+QString::number(buyPig::vb[Index6_1].weight,10)+
        line4_1+QString::number(buyPig::vb[Index6_1].starvation,10)+
        line5;
    }
    else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
    {
    sum=line1+num+
        line2+
        line3+game::bpf.p1[pigFarm::rec-1].pigName1+
        line4+QString::number(buyPig::vh[Index6_1].weight,10)+
        line4_1+QString::number(buyPig::vh[Index6_1].starvation,10)+
        line5;
    }
    ui->textEdit->setText(sum);
        }
    }
    else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
    {
        line3="\n\n\t该栏有";
    QString line4="\n\n\t小猪重量：";
    QString line5;
    QString line6;
    QString sum;
    if(game::bpf.p1[pigFarm::rec-1].ifsell1)
    line5="\n\n\t这只小猪可以出售了";
    else
    {
        line5="\n\n\t这只小猪还不能出售";
    }
    if(game::bpf.p1[pigFarm::rec-1].ifsell2)
        line6="\n\n\t这只小猪可以出售了";
    else
    {
        line6="\n\n\t这只小猪还不能出售";
    }
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vw[Index6_1].weight,10)+
            line4_1+QString::number(buyPig::vw[Index6_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index6_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index6_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vw[Index6_1].weight,10)+
            line4_1+QString::number(buyPig::vw[Index6_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index6_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index6_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vw[Index6_1].weight,10)+
            line4_1+QString::number(buyPig::vw[Index6_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index6_2].weight,10)+
            line4_1+QString::number(buyPig::vh[Index6_2].starvation,10)+
            line6;}
    }
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vb[Index6_1].weight,10)+
            line4_1+QString::number(buyPig::vb[Index6_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index6_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index6_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vb[Index6_1].weight,10)+
            line4_1+QString::number(buyPig::vb[Index6_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index6_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index6_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vb[Index6_1].weight,10)+
            line4_1+QString::number(buyPig::vb[Index6_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index6_2].weight,10)+
            line4_1+QString::number(buyPig::vh[Index6_2].starvation,10)+
            line6;}
    }
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
    {
        if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vh[Index6_1].weight,10)+
            line4_1+QString::number(buyPig::vh[Index6_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vw[Index6_2].weight,10)+
            line4_1+QString::number(buyPig::vw[Index6_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vh[Index6_1].weight,10)+
            line4_1+QString::number(buyPig::vh[Index6_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vb[Index6_2].weight,10)+
            line4_1+QString::number(buyPig::vb[Index6_2].starvation,10)+
            line6;}
        else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
        {
    sum=line1+num+
            line2+
            line3+game::bpf.p1[pigFarm::rec-1].pigName1+
            line4+QString::number(buyPig::vh[Index6_1].weight,10)+
            line4_1+QString::number(buyPig::vh[Index6_1].starvation,10)+
            line5+
            line3+game::bpf.p1[pigFarm::rec-1].pigName2+
            line4+QString::number(buyPig::vh[Index6_2].weight,10)+
            line4_1+QString::number(buyPig::vh[Index6_2].starvation,10)+
            line6;

    }
    }
 ui->textEdit->setText(sum);
        }

        break;
        }
        case 2:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index1_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index1_4].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index1_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index1_4].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index1_4].weight)+
                    line4_1+QString::number(buyPig::vh[Index1_4].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index6_3].weight,10)+
                line4_1+QString::number(buyPig::vw[Index6_3].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index6_3].weight,10)+
                line4_1+QString::number(buyPig::vb[Index6_3].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index6_3].weight,10)+
                line4_1+QString::number(buyPig::vh[Index6_3].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index6_3].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index6_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index6_3].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index6_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index6_3].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index6_4].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_4].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index6_3].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index6_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index6_3].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index6_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index6_3].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index6_4].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_4].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index6_3].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index6_4].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index6_3].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index6_4].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_4].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index6_3].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_3].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index6_4].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_4].starvation,10)+
                    line6;

            }
            }
 ui->textEdit->setText(sum);
                }

            break;
        }
        case 3:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index6_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_6].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index6_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_6].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index6_6].weight)+
                    line4_1+QString::number(buyPig::vh[Index6_6].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index6_5].weight,10)+
                line4_1+QString::number(buyPig::vw[Index6_5].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index6_5].weight,10)+
                line4_1+QString::number(buyPig::vb[Index6_5].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index6_5].weight,10)+
                line4_1+QString::number(buyPig::vh[Index6_5].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index6_5].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index6_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index6_5].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index6_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index6_5].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index6_6].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_6].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index6_5].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index6_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index6_5].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index6_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index6_5].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index6_6].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_6].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index6_5].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index6_6].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index6_5].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index6_6].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_6].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index6_5].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_5].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index6_6].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_6].starvation,10)+
                    line6;

            }
            }

                }

            break;
        }
        case 4:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index6_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_8].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index6_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_8].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index6_8].weight)+
                    line4_1+QString::number(buyPig::vh[Index6_8].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index6_7].weight,10)+
                line4_1+QString::number(buyPig::vw[Index6_7].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index6_7].weight,10)+
                line4_1+QString::number(buyPig::vb[Index6_7].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index6_7].weight,10)+
                line4_1+QString::number(buyPig::vh[Index6_7].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index6_7].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index6_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index6_7].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index6_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index6_7].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index6_8].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_8].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index6_7].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index6_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index6_7].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index6_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index6_7].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index6_8].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_8].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index6_7].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index6_8].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index6_7].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index6_8].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_8].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index6_7].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_7].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index6_8].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_8].starvation,10)+
                    line6;

            }
            }
 ui->textEdit->setText(sum);
                }

            break;
        }
        case 5:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index6_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_10].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index6_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_10].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index6_10].weight)+
                    line4_1+QString::number(buyPig::vh[Index6_10].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index6_9].weight,10)+
                line4_1+QString::number(buyPig::vw[Index6_9].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index6_9].weight,10)+
                line4_1+QString::number(buyPig::vb[Index6_9].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index6_9].weight,10)+
                line4_1+QString::number(buyPig::vh[Index6_9].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index6_9].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index6_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index6_9].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index6_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index6_9].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index6_10].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_10].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index6_9].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index6_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index6_9].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index6_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index6_9].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index6_10].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_10].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index6_9].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index6_10].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index6_9].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index6_10].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_10].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index6_9].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_9].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index6_10].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_10].starvation,10)+
                    line6;

            }
            }
 ui->textEdit->setText(sum);
                }

            break;
        }
        case 6:
        {
            if(game::bpf.p1[pigFarm::rec-1].havePigNum==0)
            {
                line3="\n\t该栏里没有猪";
                ui->textEdit->setText(line1+num+
                                      line2+
                                      line3
                                      );
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
                {
                    line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
        //        QString line6=QString()
                QString line5;
                if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line5="\n\n\t这只小猪可以出售了";
                else
                {
                line5="\n\n\t这只小猪还不能出售";
                }
                QString sum;
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index6_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_12].starvation,10)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index6_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_12].starvation)+
                    line5;
                }
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
                sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index6_12].weight)+
                    line4_1+QString::number(buyPig::vh[Index6_12].starvation)+
                    line5;
                }
                ui->textEdit->setText(sum);
                }
                else    //comb1rec!=0
                {
                line3="\n\n\t该栏有";
                QString line4="\n\n\t小猪重量：";
                QString line5;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
                line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vw[Index6_11].weight,10)+
                line4_1+QString::number(buyPig::vw[Index6_11].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vb[Index6_11].weight,10)+
                line4_1+QString::number(buyPig::vb[Index6_11].starvation,10)+
                line5;
            }
            else if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
            sum=line1+num+
                line2+
                line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                line4+QString::number(buyPig::vh[Index6_11].weight,10)+
                line4_1+QString::number(buyPig::vh[Index6_11].starvation,10)+
                line5;
            }
            ui->textEdit->setText(sum);
                }
            }
            else if(game::bpf.p1[pigFarm::rec-1].havePigNum==2)
            {
                line3="\n\n\t该栏有";
            QString line4="\n\n\t小猪重量：";
            QString line5;
            QString line6;
            QString sum;
            if(game::bpf.p1[pigFarm::rec-1].ifsell1)
            line5="\n\n\t这只小猪可以出售了";
            else
            {
                line5="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].ifsell2)
                line6="\n\n\t这只小猪可以出售了";
            else
            {
                line6="\n\n\t这只小猪还不能出售";
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==1)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index6_11].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index6_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index6_11].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index6_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vw[Index6_11].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index6_12].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_12].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==2)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index6_11].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index6_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index6_11].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index6_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vb[Index6_11].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index6_12].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_12].starvation,10)+
                    line6;}
            }
            if(game::bpf.p1[pigFarm::rec-1].comb1rec==3)
            {
                if(game::bpf.p1[pigFarm::rec-1].comb2rec==1)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index6_11].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vw[Index6_12].weight,10)+
                    line4_1+QString::number(buyPig::vw[Index6_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==2)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index6_11].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vb[Index6_12].weight,10)+
                    line4_1+QString::number(buyPig::vb[Index6_12].starvation,10)+
                    line6;}
                else if(game::bpf.p1[pigFarm::rec-1].comb2rec==3)
                {
            sum=line1+num+
                    line2+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName1+
                    line4+QString::number(buyPig::vh[Index6_11].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_11].starvation,10)+
                    line5+
                    line3+game::bpf.p1[pigFarm::rec-1].pigName2+
                    line4+QString::number(buyPig::vh[Index6_12].weight,10)+
                    line4_1+QString::number(buyPig::vh[Index6_12].starvation,10)+
                    line6;

            }
            }
 ui->textEdit->setText(sum);
                }
            break;
        }
        }
    break;
    }

    }
}


farmText::~farmText()
{
    delete ui;
}

void farmText::on_btnSell_clicked()
{
    sell *s=new sell(this);
    s->show();
    connect(s,&sell::updatePig,this,&farmText::updatePig);
}

void farmText::on_btnClose_clicked()
{
    close();
}

void farmText::on_btnPush_clicked()
{
    pushType *p=new pushType(this);
    p->show();
    emit commboxReady();
    connect(this,SIGNAL(commboxReady()),p,SLOT(combboxInit()));
    connect(p,SIGNAL(push()),this,SLOT(getText()));
    connect(p,SIGNAL(preserveIndex()),this,SLOT(IndexInit()));
}

void farmText::IndexInit()
{
    switch(game::numrec)
    {
    case 1:
    {
        switch(pigFarm::rec)
        {
        case 1:
        {
            if(pushrec1_1==0)
            switch(game::bpf.p1[pigFarm::rec-1].comb1rec)
    {
    case 0:
        break;
    case 1:
    {
        Index1_1=pushType::whiteii;
        pushrec1_1++;
        break;
    }
    case 2:
    {
        Index1_1=pushType::blackii;
        pushrec1_1++;
        break;
    }
    case 3:
    {
        Index1_1=pushType::huaii;
        pushrec1_1++;
        break;
    }
    }

            if(pushrec1_2==0)
            switch(game::bpf.p1[pigFarm::rec-1].comb2rec)
    {
    case 0:
        break;
    case 1:
    {
        Index1_2=pushType::whiteii;
        pushrec1_2++;
        break;
    }
    case 2:
    {
        Index1_2=pushType::blackii;
        pushrec1_2++;
        break;
    }
    case 3:
    {
        Index1_2=pushType::huaii;
        pushrec1_2++;
        break;
    }
    }
                break;
        }
        case 2:
        {
            if(pushrec1_3==0)
            switch(game::bpf.p1[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index1_3=pushType::whiteii;
                pushrec1_3++;
                break;
            }
            case 2:
            {
                Index1_3=pushType::blackii;
                pushrec1_3++;
                break;
            }
            case 3:
            {
                Index1_3=pushType::huaii;
                pushrec1_3++;
                break;
            }
            }
            if(pushrec1_4==0)
            switch(game::bpf.p1[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index1_4=pushType::whiteii;
                pushrec1_4++;
                break;
            }
            case 2:
            {
                Index1_4=pushType::blackii;
                pushrec1_4++;
                break;
            }
            case 3:
            {
                Index1_4=pushType::huaii;
                pushrec1_4++;
                break;
            }
            }
                break;
        }
        case 3:
        {
            if(pushrec1_5==0)
            switch(game::bpf.p1[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index1_5=pushType::whiteii;
                pushrec1_5++;
                break;
            }
            case 2:
            {
                Index1_5=pushType::blackii;
                pushrec1_5++;
                break;
            }
            case 3:
            {
                Index1_5=pushType::huaii;
                pushrec1_5++;
                break;
            }
            }
            if(pushrec1_6==0)
            switch(game::bpf.p1[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index1_6=pushType::whiteii;
                pushrec1_6++;
                break;
            }
            case 2:
            {
                Index1_6=pushType::blackii;
                pushrec1_6++;
                break;
            }
            case 3:
            {
                Index1_6=pushType::huaii;
                pushrec1_6++;
                break;
            }
            }
                break;
        }
        case 4:
        {
            if(pushrec1_7==0)
            switch(game::bpf.p1[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index1_7=pushType::whiteii;
                pushrec1_7++;
                break;
            }
            case 2:
            {
                Index1_7=pushType::blackii;
                pushrec1_7++;
                break;
            }
            case 3:
            {
                Index1_7=pushType::huaii;
                pushrec1_7++;
                break;
            }
            }
            if(pushrec1_8==0)
            switch(game::bpf.p1[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index1_8=pushType::whiteii;
                pushrec1_8++;
                break;
            }
            case 2:
            {
                Index1_8=pushType::blackii;
                pushrec1_8++;
                break;
            }
            case 3:
            {
                Index1_8=pushType::huaii;
                pushrec1_8++;
                break;
            }
            }
                break;
        }
        case 5:
        {
            if(pushrec1_9==0)
            switch(game::bpf.p1[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index1_9=pushType::whiteii;
                pushrec1_9++;
                break;
            }
            case 2:
            {
                Index1_9=pushType::blackii;
                pushrec1_9++;
                break;
            }
            case 3:
            {
                Index1_9=pushType::huaii;
                pushrec1_9++;
                break;
            }
            }
            if(pushrec1_10==0)
            switch(game::bpf.p1[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index1_10=pushType::whiteii;
                pushrec1_10++;
                break;
            }
            case 2:
            {
                Index1_10=pushType::blackii;
                pushrec1_10++;
                break;
            }
            case 3:
            {
                Index1_10=pushType::huaii;
                pushrec1_10++;
                break;
            }
            }
                break;
        }
        case 6:
        {
            if(pushrec1_11==0)
            switch(game::bpf.p1[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index1_11=pushType::whiteii;
                pushrec1_11++;
                break;
            }
            case 2:
            {
                Index1_11=pushType::blackii;
                pushrec1_11++;
                break;
            }
            case 3:
            {
                Index1_11=pushType::huaii;
                pushrec1_11++;
                break;
            }
            }
            if(pushrec1_12==0)
            switch(game::bpf.p1[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index1_12=pushType::whiteii;
                pushrec1_12++;
                break;
            }
            case 2:
            {
                Index1_12=pushType::blackii;
                pushrec1_12++;
                break;
            }
            case 3:
            {
                Index1_12=pushType::huaii;
                pushrec1_12++;
                break;
            }
            }
                break;
        }
        }
        break;
    }
    case 2:
    {
        switch(pigFarm::rec)
        {
        case 1:
        {
            if(pushrec2_1==0)
            switch(game::bpf.p2[pigFarm::rec-1].comb1rec)
    {
    case 0:
        break;
    case 1:
    {
        Index2_1=pushType::whiteii;
                pushrec2_1++;
        break;
    }
    case 2:
    {
        Index2_1=pushType::blackii;
                pushrec2_1++;
        break;
    }
    case 3:
    {
        Index2_1=pushType::huaii;
                pushrec2_1++;
        break;
    }
    }
            if(pushrec2_2==0)
            switch(game::bpf.p2[pigFarm::rec-1].comb2rec)
    {
    case 0:
        break;
    case 1:
    {
        Index2_2=pushType::whiteii;
        pushrec2_2++;
        break;
    }
    case 2:
    {
        Index2_2=pushType::blackii;
        pushrec2_2++;
        break;
    }
    case 3:
    {
        Index2_2=pushType::huaii;
        pushrec2_2++;
        break;
    }
    }
                break;
        }
        case 2:
        {
            if(pushrec2_3==0)
            switch(game::bpf.p2[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index2_3=pushType::whiteii;
                pushrec2_3++;
                break;
            }
            case 2:
            {
                Index2_3=pushType::blackii;
                pushrec2_3++;
                break;
            }
            case 3:
            {
                Index2_3=pushType::huaii;
                pushrec2_3++;
                break;
            }
            }
            if(pushrec2_4==0)
            switch(game::bpf.p2[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index2_4=pushType::whiteii;
                pushrec2_4++;
                break;
            }
            case 2:
            {
                Index2_4=pushType::blackii;
                pushrec2_4++;
                break;
            }
            case 3:
            {
                Index2_4=pushType::huaii;
                pushrec2_4++;
                break;
            }
            }
                break;
        }
        case 3:
        {
            if(pushrec2_5==0)
            switch(game::bpf.p2[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index2_5=pushType::whiteii;
                pushrec2_5++;
                break;
            }
            case 2:
            {
                Index2_5=pushType::blackii;
                pushrec2_5++;
                break;
            }
            case 3:
            {
                Index2_5=pushType::huaii;
                pushrec2_5++;
                break;
            }
            }
            if(pushrec2_6==0)
            switch(game::bpf.p2[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index2_6=pushType::whiteii;
                pushrec2_6++;
                break;
            }
            case 2:
            {
                Index2_6=pushType::blackii;
                pushrec2_6++;
                break;
            }
            case 3:
            {
                Index2_6=pushType::huaii;
                pushrec2_6++;
                break;
            }
            }
                break;
        }
        case 4:
        {
            if(pushrec2_7==0)
            switch(game::bpf.p2[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index2_7=pushType::whiteii;
                pushrec2_7++;
                break;
            }
            case 2:
            {
                Index2_7=pushType::blackii;
                pushrec2_7++;
                break;
            }
            case 3:
            {
                Index2_7=pushType::huaii;
                pushrec2_7++;
                break;
            }
            }
            if(pushrec2_8==0)
            switch(game::bpf.p2[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index2_8=pushType::whiteii;
                pushrec2_8++;
                break;
            }
            case 2:
            {
                Index2_8=pushType::blackii;
                pushrec2_8++;
                break;
            }
            case 3:
            {
                Index2_8=pushType::huaii;
                pushrec2_8++;
                break;
            }
            }
                break;
        }
        case 5:
        {
            if(pushrec2_9==0)
            switch(game::bpf.p2[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index2_9=pushType::whiteii;
                pushrec2_9++;
                break;
            }
            case 2:
            {
                Index2_9=pushType::blackii;
                pushrec2_9++;
                break;
            }
            case 3:
            {
                Index2_9=pushType::huaii;
                pushrec2_9++;
                break;
            }
            }
            if(pushrec2_10==0)
            switch(game::bpf.p2[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index2_10=pushType::whiteii;
                pushrec2_10++;
                break;
            }
            case 2:
            {
                Index2_10=pushType::blackii;
                pushrec2_10++;
                break;
            }
            case 3:
            {
                Index2_10=pushType::huaii;
                pushrec2_10++;
                break;
            }
            }
                break;
        }
        case 6:
        {
            if(pushrec2_11==0)
            switch(game::bpf.p2[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index2_11=pushType::whiteii;
                pushrec2_11++;
                break;
            }
            case 2:
            {
                Index2_11=pushType::blackii;
                pushrec2_11++;
                break;
            }
            case 3:
            {
                Index2_11=pushType::huaii;
                pushrec2_11++;
                break;
            }
            }
            if(pushrec2_12==0)
            switch(game::bpf.p2[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index2_12=pushType::whiteii;
                pushrec2_12++;
                break;
            }
            case 2:
            {
                Index2_12=pushType::blackii;
                pushrec2_12++;
                break;
            }
            case 3:
            {
                Index2_12=pushType::huaii;
                pushrec2_12++;
                break;
            }
            }
                break;
        }
        }
        break;
    }
    case 3:
    {
        switch(pigFarm::rec)
        {
        case 1:
        {
            if(pushrec3_1==0)
            switch(game::bpf.p3[pigFarm::rec-1].comb1rec)
    {
    case 0:
        break;
    case 1:
    {
        Index3_1=pushType::whiteii;
        pushrec3_1++;
        break;
    }
    case 2:
    {
        Index3_1=pushType::blackii;
        pushrec3_1++;
        break;
    }
    case 3:
    {
        Index3_1=pushType::huaii;
        pushrec3_1++;
        break;
    }
    }
            if(pushrec3_2==0)
            switch(game::bpf.p3[pigFarm::rec-1].comb2rec)
    {
    case 0:
        break;
    case 1:
    {
        Index3_2=pushType::whiteii;
        pushrec3_2++;
        break;
    }
    case 2:
    {
        Index3_2=pushType::blackii;
        pushrec3_2++;
        break;
    }
    case 3:
    {
        Index3_2=pushType::huaii;
        pushrec3_2++;
        break;
    }
    }
                break;
        }
        case 2:
        {
            if(pushrec3_3==0)
            switch(game::bpf.p3[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index3_3=pushType::whiteii;
                pushrec3_3++;
                break;
            }
            case 2:
            {
                Index3_3=pushType::blackii;
                pushrec3_3++;
                break;
            }
            case 3:
            {
                Index3_3=pushType::huaii;
                pushrec3_3++;
                break;
            }
            }
            if(pushrec3_4==0)
            switch(game::bpf.p3[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index3_4=pushType::whiteii;
                pushrec3_4++;
                break;
            }
            case 2:
            {
                Index3_4=pushType::blackii;
                pushrec3_4++;
                break;
            }
            case 3:
            {
                Index3_4=pushType::huaii;
                pushrec3_4++;
                break;
            }
            }
                break;
        }
        case 3:
        {
            if(pushrec3_5==0)
            switch(game::bpf.p3[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index3_5=pushType::whiteii;
                pushrec3_5++;
                break;
            }
            case 2:
            {
                Index3_5=pushType::blackii;
                pushrec3_5++;
                break;
            }
            case 3:
            {
                Index3_5=pushType::huaii;
                pushrec3_5++;
                break;
            }
            }
            if(pushrec3_6==0)
            switch(game::bpf.p3[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index3_6=pushType::whiteii;
                pushrec3_6++;
                break;
            }
            case 2:
            {
                Index3_6=pushType::blackii;
                pushrec3_6++;
                break;
            }
            case 3:
            {
                Index3_6=pushType::huaii;
                pushrec3_6++;
                break;
            }
            }
                break;
        }
        case 4:
        {
            if(pushrec3_7==0)
            switch(game::bpf.p3[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index3_7=pushType::whiteii;
                pushrec3_7++;
                break;
            }
            case 2:
            {
                Index3_7=pushType::blackii;
                pushrec3_7++;
                break;
            }
            case 3:
            {
                Index3_7=pushType::huaii;
                pushrec3_7++;
                break;
            }
            }
            if(pushrec3_8==0)
            switch(game::bpf.p3[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index3_8=pushType::whiteii;
                pushrec3_8++;
                break;
            }
            case 2:
            {
                Index3_8=pushType::blackii;
                pushrec3_8++;
                break;
            }
            case 3:
            {
                Index3_8=pushType::huaii;
                pushrec3_8++;
                break;
            }
            }
                break;
        }
        case 5:
        {
            if(pushrec3_9==0)
            switch(game::bpf.p3[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index3_9=pushType::whiteii;
                pushrec3_9++;
                break;
            }
            case 2:
            {
                Index3_9=pushType::blackii;
                pushrec3_9++;
                break;
            }
            case 3:
            {
                Index3_9=pushType::huaii;
                pushrec3_9++;
                break;
            }
            }
            if(pushrec3_10==0)
            switch(game::bpf.p3[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index3_10=pushType::whiteii;
                pushrec3_10++;
                break;
            }
            case 2:
            {
                Index3_10=pushType::blackii;
                pushrec3_10++;
                break;
            }
            case 3:
            {
                Index3_10=pushType::huaii;
                pushrec3_10++;
                break;
            }
            }
                break;
        }
        case 6:
        {
            if(pushrec3_11==0)
            switch(game::bpf.p3[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index3_11=pushType::whiteii;
                pushrec3_11++;
                break;
            }
            case 2:
            {
                Index3_11=pushType::blackii;
                pushrec3_11++;
                break;
            }
            case 3:
            {
                Index3_11=pushType::huaii;
                pushrec3_11++;
                break;
            }
            }
            if(pushrec3_12==0)
            switch(game::bpf.p3[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index3_12=pushType::whiteii;
                pushrec3_12++;
                break;
            }
            case 2:
            {
                Index3_12=pushType::blackii;
                pushrec3_12++;
                break;
            }
            case 3:
            {
                Index3_12=pushType::huaii;
                pushrec3_12++;
                break;
            }
            }
                break;
        }
        }
        break;
    }
    case 4:
    {
        switch(pigFarm::rec)
        {
        case 1:
        {
            if(pushrec4_1==0)
            switch(game::bpf.p4[pigFarm::rec-1].comb1rec)
    {
    case 0:
        break;
    case 1:
    {
        Index4_1=pushType::whiteii;
        pushrec4_1++;
        break;
    }
    case 2:
    {
        Index4_1=pushType::blackii;
        pushrec4_1++;
        break;
    }
    case 3:
    {
        Index4_1=pushType::huaii;
        pushrec4_1++;
        break;
    }
    }
            if(pushrec4_2==0)
            switch(game::bpf.p4[pigFarm::rec-1].comb2rec)
    {
    case 0:
        break;
    case 1:
    {
        Index4_2=pushType::whiteii;
        pushrec4_2++;
        break;
    }
    case 2:
    {
        Index4_2=pushType::blackii;
        pushrec4_2++;
        break;
    }
    case 3:
    {
        Index4_2=pushType::huaii;
        pushrec4_2++;
        break;
    }
    }
                break;
        }
        case 2:
        {
            if(pushrec4_3==0)
            switch(game::bpf.p4[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index4_3=pushType::whiteii;
                pushrec4_3++;
                break;
            }
            case 2:
            {
                Index4_3=pushType::blackii;
                pushrec4_3++;
                break;
            }
            case 3:
            {
                Index4_3=pushType::huaii;
                pushrec4_3++;
                break;
            }
            }
            if(pushrec4_4==0)
            switch(game::bpf.p4[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index4_4=pushType::whiteii;
                pushrec4_4++;
                break;
            }
            case 2:
            {
                Index4_4=pushType::blackii;
                pushrec4_4++;
                break;
            }
            case 3:
            {
                Index4_4=pushType::huaii;
                pushrec4_4++;
                break;
            }
            }
                break;
        }
        case 3:
        {
            if(pushrec4_5==0)
            switch(game::bpf.p4[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index4_5=pushType::whiteii;
                pushrec4_5++;
                break;
            }
            case 2:
            {
                Index4_5=pushType::blackii;
                pushrec4_5++;
                break;
            }
            case 3:
            {
                Index4_5=pushType::huaii;
                pushrec4_5++;
                break;
            }
            }
            if(pushrec4_6==0)
            switch(game::bpf.p4[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index4_6=pushType::whiteii;
                pushrec4_6++;
                break;
            }
            case 2:
            {
                Index4_6=pushType::blackii;
                pushrec4_6++;
                break;
            }
            case 3:
            {
                Index4_6=pushType::huaii;
                pushrec4_6++;
                break;
            }
            }
                break;
        }
        case 4:
        {
            if(pushrec4_7==0)
            switch(game::bpf.p4[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index4_7=pushType::whiteii;
                pushrec4_7++;
                break;
            }
            case 2:
            {
                Index4_7=pushType::blackii;
                pushrec4_7++;
                break;
            }
            case 3:
            {
                Index4_7=pushType::huaii;
                pushrec4_7++;
                break;
            }
            }
            if(pushrec4_8==0)
            switch(game::bpf.p4[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index4_8=pushType::whiteii;
                pushrec4_8++;
                break;
            }
            case 2:
            {
                Index4_8=pushType::blackii;
                pushrec4_8++;
                break;
            }
            case 3:
            {
                Index4_8=pushType::huaii;
                pushrec4_8++;
                break;
            }
            }
                break;
        }
        case 5:
        {
            if(pushrec4_9==0)
            switch(game::bpf.p4[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index4_9=pushType::whiteii;
                pushrec4_9++;
                break;
            }
            case 2:
            {
                Index4_9=pushType::blackii;
                pushrec4_9++;
                break;
            }
            case 3:
            {
                Index4_9=pushType::huaii;
                pushrec4_9++;
                break;
            }
            }
            if(pushrec4_10==0)
            switch(game::bpf.p4[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index4_10=pushType::whiteii;
                pushrec4_10++;
                break;
            }
            case 2:
            {
                Index4_10=pushType::blackii;
                pushrec4_10++;
                break;
            }
            case 3:
            {
                Index4_10=pushType::huaii;
                pushrec4_10++;
                break;
            }
            }
                break;
        }
        case 6:
        {
            if(pushrec4_11==0)
            switch(game::bpf.p4[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index4_11=pushType::whiteii;
                pushrec4_11++;
                break;
            }
            case 2:
            {
                Index4_11=pushType::blackii;
                pushrec4_11++;
                break;
            }
            case 3:
            {
                Index4_11=pushType::huaii;
                pushrec4_11++;
                break;
            }
            }
            if(pushrec4_12==0)
            switch(game::bpf.p4[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index4_12=pushType::whiteii;
                pushrec4_12++;
                break;
            }
            case 2:
            {
                Index4_12=pushType::blackii;
                pushrec4_12++;
                break;
            }
            case 3:
            {
                Index4_12=pushType::huaii;
                pushrec4_12++;
                break;
            }
            }
                break;
        }
        }
        break;
    }
    case 5:
    {
        switch(pigFarm::rec)
        {
        case 1:
        {
            if(pushrec5_1==0)
            switch(game::bpf.p5[pigFarm::rec-1].comb1rec)
    {
    case 0:
        break;
    case 1:
    {
        Index5_1=pushType::whiteii;
        pushrec5_1++;
        break;
    }
    case 2:
    {
        Index5_1=pushType::blackii;
        pushrec5_1++;
        break;
    }
    case 3:
    {
        Index5_1=pushType::huaii;
        pushrec5_1++;
        break;
    }
    }
            if(pushrec5_2==0)
            switch(game::bpf.p5[pigFarm::rec-1].comb2rec)
    {
    case 0:
        break;
    case 1:
    {
        Index5_2=pushType::whiteii;
        pushrec5_2++;
        break;
    }
    case 2:
    {
        Index5_2=pushType::blackii;
        pushrec5_2++;
        break;
    }
    case 3:
    {
        Index5_2=pushType::huaii;
        pushrec5_2++;
        break;
    }
    }
                break;
        }
        case 2:
        {
            if(pushrec5_3==0)
            switch(game::bpf.p5[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index5_3=pushType::whiteii;
                pushrec5_3++;
                break;
            }
            case 2:
            {
                Index5_3=pushType::blackii;
                pushrec5_3++;
                break;
            }
            case 3:
            {
                Index5_3=pushType::huaii;
                pushrec5_3++;
                break;
            }
            }
            if(pushrec5_4==0)
            switch(game::bpf.p5[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index5_4=pushType::whiteii;
                pushrec5_4++;
                break;
            }
            case 2:
            {
                Index5_4=pushType::blackii;
                pushrec5_4++;
                break;
            }
            case 3:
            {
                Index5_4=pushType::huaii;
                pushrec5_4++;
                break;
            }
            }
                break;
        }
        case 3:
        {
            if(pushrec5_5==0)
            switch(game::bpf.p5[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index5_5=pushType::whiteii;
                pushrec5_5++;
                break;
            }
            case 2:
            {
                Index5_5=pushType::blackii;
                pushrec5_5++;
                break;
            }
            case 3:
            {
                Index5_5=pushType::huaii;
                pushrec5_5++;
                break;
            }
            }
            if(pushrec5_6==0)
            switch(game::bpf.p5[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index5_6=pushType::whiteii;
                pushrec5_6++;
                break;
            }
            case 2:
            {
                Index5_6=pushType::blackii;
                pushrec5_6++;
                break;
            }
            case 3:
            {
                Index5_6=pushType::huaii;
                pushrec5_6++;
                break;
            }
            }
                break;
        }
        case 4:
        {
            if(pushrec5_7==0)
            switch(game::bpf.p5[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index5_7=pushType::whiteii;
                pushrec5_7++;
                break;
            }
            case 2:
            {
                Index5_7=pushType::blackii;
                pushrec5_7++;
                break;
            }
            case 3:
            {
                Index5_7=pushType::huaii;
                pushrec5_7++;
                break;
            }
            }
            if(pushrec5_8==0)
            switch(game::bpf.p5[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index5_8=pushType::whiteii;
                pushrec5_8++;
                break;
            }
            case 2:
            {
                Index5_8=pushType::blackii;
                pushrec5_8++;
                break;
            }
            case 3:
            {
                Index5_8=pushType::huaii;
                pushrec5_8++;
                break;
            }
            }
                break;
        }
        case 5:
        {
            if(pushrec5_9==0)
            switch(game::bpf.p5[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index5_9=pushType::whiteii;
                pushrec5_9++;
                break;
            }
            case 2:
            {
                Index5_9=pushType::blackii;
                pushrec5_9++;
                break;
            }
            case 3:
            {
                Index5_9=pushType::huaii;
                pushrec5_9++;
                break;
            }
            }
            if(pushrec5_10==0)
            switch(game::bpf.p5[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index5_10=pushType::whiteii;
                pushrec5_10++;
                break;
            }
            case 2:
            {
                Index5_10=pushType::blackii;
                pushrec5_10++;
                break;
            }
            case 3:
            {
                Index5_10=pushType::huaii;
                pushrec5_10++;
                break;
            }
            }
                break;
        }
        case 6:
        {
            if(pushrec5_11==0)
            switch(game::bpf.p5[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index5_11=pushType::whiteii;
                pushrec5_11++;
                break;
            }
            case 2:
            {
                Index5_11=pushType::blackii;
                pushrec5_11++;
                break;
            }
            case 3:
            {
                Index5_11=pushType::huaii;
                pushrec5_11++;
                break;
            }
            }
            if(pushrec5_12==0)
            switch(game::bpf.p5[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index5_12=pushType::whiteii;
                pushrec5_12++;
                break;
            }
            case 2:
            {
                Index5_12=pushType::blackii;
                pushrec5_12++;
                break;
            }
            case 3:
            {
                Index5_12=pushType::huaii;
                pushrec5_12++;
                break;
            }
            }
                break;
        }
        }
        break;
    }
    case 6:
    {
        switch(pigFarm::rec)
        {
        case 1:
        {
            if(pushrec6_1==0)
            switch(game::bpf.p6[pigFarm::rec-1].comb1rec)
    {
    case 0:
        break;
    case 1:
    {
        Index6_1=pushType::whiteii;
        pushrec6_1++;
        break;
    }
    case 2:
    {
        Index6_1=pushType::blackii;
        pushrec6_1++;
        break;
    }
    case 3:
    {
        Index6_1=pushType::huaii;
        pushrec6_1++;
        break;
    }
    }
            if(pushrec6_2==0)
            switch(game::bpf.p6[pigFarm::rec-1].comb2rec)
    {
    case 0:
        break;
    case 1:
    {
        Index6_2=pushType::whiteii;
        pushrec6_2++;
        break;
    }
    case 2:
    {
        Index6_2=pushType::blackii;
        pushrec6_2++;
        break;
    }
    case 3:
    {
        Index6_2=pushType::huaii;
        pushrec6_2++;
        break;
    }
    }
                break;
        }
        case 2:
        {
            if(pushrec6_3==0)
            switch(game::bpf.p6[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index6_3=pushType::whiteii;
                pushrec6_3++;
                break;
            }
            case 2:
            {
                Index6_3=pushType::blackii;
                pushrec6_3++;
                break;
            }
            case 3:
            {
                Index6_3=pushType::huaii;
                pushrec6_3++;
                break;
            }
            }
            if(pushrec6_4==0)
            switch(game::bpf.p6[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index6_4=pushType::whiteii;
                pushrec6_4++;
                break;
            }
            case 2:
            {
                Index6_4=pushType::blackii;
                pushrec6_4++;
                break;
            }
            case 3:
            {
                Index6_4=pushType::huaii;
                pushrec6_4++;
                break;
            }
            }
                break;
        }
        case 3:
        {
            if(pushrec6_5==0)
            switch(game::bpf.p6[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index6_5=pushType::whiteii;
                pushrec6_5++;
                break;
            }
            case 2:
            {
                Index6_5=pushType::blackii;
                pushrec6_5++;
                break;
            }
            case 3:
            {
                Index6_5=pushType::huaii;
                pushrec6_5++;
                break;
            }
            }
            if(pushrec6_6==0)
            switch(game::bpf.p6[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index6_6=pushType::whiteii;
                pushrec6_6++;
                break;
            }
            case 2:
            {
                Index6_6=pushType::blackii;
                pushrec6_6++;
                break;
            }
            case 3:
            {
                Index6_6=pushType::huaii;
                pushrec6_6++;
                break;
            }
            }
                break;
        }
        case 4:
        {
            if(pushrec6_7==0)
            switch(game::bpf.p6[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index6_7=pushType::whiteii;
                pushrec6_7++;
                break;
            }
            case 2:
            {
                Index6_7=pushType::blackii;
                pushrec6_7++;
                break;
            }
            case 3:
            {
                Index6_7=pushType::huaii;
                pushrec6_7++;
                break;
            }
            }
            if(pushrec6_8==0)
            switch(game::bpf.p6[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index6_8=pushType::whiteii;
                pushrec6_8++;
                break;
            }
            case 2:
            {
                Index6_8=pushType::blackii;
                pushrec6_8++;
                break;
            }
            case 3:
            {
                Index6_8=pushType::huaii;
                pushrec6_8++;
                break;
            }
            }
                break;
        }
        case 5:
        {
            if(pushrec6_9==0)
            switch(game::bpf.p6[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index6_9=pushType::whiteii;
                pushrec6_9++;
                break;
            }
            case 2:
            {
                Index6_9=pushType::blackii;
                pushrec6_9++;
                break;
            }
            case 3:
            {
                Index6_9=pushType::huaii;
                pushrec6_9++;
                break;
            }
            }
            if(pushrec6_10==0)
            switch(game::bpf.p6[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index6_10=pushType::whiteii;
                pushrec6_10++;
                break;
            }
            case 2:
            {
                Index6_10=pushType::blackii;
                pushrec6_10++;
                break;
            }
            case 3:
            {
                Index6_10=pushType::huaii;
                pushrec6_10++;
                break;
            }
            }
                break;
        }
        case 6:
        {
            if(pushrec6_11==0)
            switch(game::bpf.p6[pigFarm::rec-1].comb1rec)
            {
            case 0:
                break;
            case 1:
            {
                Index6_11=pushType::whiteii;
                pushrec6_11++;
                break;
            }
            case 2:
            {
                Index6_11=pushType::blackii;
                pushrec6_11++;
                break;
            }
            case 3:
            {
                Index6_11=pushType::huaii;
                pushrec6_11++;
                break;
            }
            }
            if(pushrec6_12==0)
            switch(game::bpf.p6[pigFarm::rec-1].comb2rec)
            {
            case 0:
                break;
            case 1:
            {
                Index6_12=pushType::whiteii;
                pushrec6_12++;
                break;
            }
            case 2:
            {
                Index6_12=pushType::blackii;
                pushrec6_12++;
                break;
            }
            case 3:
            {
                Index6_12=pushType::huaii;
                pushrec6_12++;
                break;
            }
            }
                break;
        }
        }
        break;
    }
    }
//    qDebug()<<"whiteii"<<pushType::whiteii
//           <<"id1-1:"<<Index1_1
//          <<"id1-2:"<<Index1_2;
}

void farmText::on_btnFeed_clicked()
{
    feed *fd=new feed(this);
    connect(fd,&feed::updatePig,this,&farmText::updatePig);
    fd->show();
}
