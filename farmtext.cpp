#include "farmtext.h"
#include "ui_farmtext.h"
int farmText::havePigNum=0;
farmText::farmText(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::farmText)
{
    ui->setupUi(this);
    getText();
    setFixedSize(1024,768);
}

void farmText::getText()
{
    ui->textEdit->setReadOnly(true);
    QString num=QString::number(pigFarm::rec,10);
    //qDebug()<<pigFarm::rec<<" string:"<<num;
    QString line1="\t猪栏编号:";
    QString line2="\n-----------------猪栏情况----------------";
   // Qstring line3=猪类型+重量+是否能卖+距离能卖还剩多久
    QString line3;
    if(ifNull)
        line3="\n\t该栏里没有猪";
    else
        line3="\n\n\t该栏有";
    QString line4="\n\n\t小猪重量：";
    QString line5="\n\n\t距离卖出时间：";
    QString ttime=QString::number(sellTime,10);
    QString weightst=QString::number(buyPig::wArr[buyPig::i].weight,10);//有白猪的信息
    ui->textEdit->setText(line1+num+
                          line2+
                          line3+buyPig::wArr[buyPig::i].name+
                          line4+weightst+
                          line5+ttime
                          );
}

farmText::~farmText()
{
    delete ui;
}

void farmText::on_btnSell_clicked()
{
    sell *s=new sell(this);
    s->show();
}

void farmText::on_btnClose_clicked()
{
    close();
}

void farmText::on_btnPush_clicked()
{
    pushType *p=new pushType(this);
    p->show();
}
