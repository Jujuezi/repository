#include "sell.h"
#include "ui_sell.h"

sell::sell(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sell)
{
    ui->setupUi(this);
    init(game::numrec,pigFarm::rec);
    ui->btnCancel->setFlat(true);
    ui->btnSell->setFlat(true);
}

sell::~sell()
{
    delete ui;
}

void sell::on_btnCancel_clicked()
{
    close();
}

void sell::sellPig(int numRec, int rec, int combNum)
{
    for(vector<whitePig>::iterator it1=buyPig::vw.begin();it1!=buyPig::vw.end();it1++)
    {
        if((*it1).NumRecPos==numRec&&(*it1).RecPos==rec-1&&(*it1).combPos==combNum)
        {
//            buyPig::vw.erase(it1);
            (*it1).NumRecPos=0;
            (*it1).RecPos=0;
            (*it1).combPos=0;
            game::whitePigNum--;
            pushType::PushWhitePigNum--;
        }
    }
    for(vector<blackPig>::iterator it2=buyPig::vb.begin();it2!=buyPig::vb.end();it2++)
    {
        if((*it2).NumRecPos==numRec&&(*it2).RecPos==rec-1&&(*it2).combPos==combNum)
        {
            (*it2).NumRecPos=0;
            (*it2).RecPos=0;
            (*it2).combPos=0;
            game::blackPigNum--;
            pushType::PushBlackPigNum--;
        }
    }
    for(vector<huaPig>::iterator it3=buyPig::vh.begin();it3!=buyPig::vh.end();it3++)
    {
        if((*it3).NumRecPos==numRec&&(*it3).RecPos==rec-1&&(*it3).combPos==combNum)
        {
            (*it3).NumRecPos=0;
            (*it3).RecPos=0;
            (*it3).combPos=0;
            game::huaPigNum--;
            pushType::PushHuaPigNum--;
        }
    }
    switch(numRec)
    {
    case 1:
    {
        game::bpf.p1[rec-1].havePigNum--;
        if(combNum==1)
        game::bpf.p1[rec-1].comb1rec=0;
        else
            game::bpf.p1[rec-1].comb2rec=0;
        switch(rec)
        {
        case 1:
        {
            if(combNum==1)
            {
            farmText::pushrec1_1=0;
            farmText::Index1_1=-1;
            qDebug()<<"sell";
            }
            else if(combNum==2)
            {
                farmText::pushrec1_2=0;
                farmText::Index1_2=-1;
            }
            break;
        }
        case 2:
        {
            if(combNum==1)
            {
            farmText::pushrec1_3=0;
            farmText::Index1_3=-1;
            }
            else if(combNum==2)
            {
            farmText::pushrec1_4=0;
            farmText::Index1_4=-1;
            }
            break;
        }
        case 3:
        {
            if(combNum==1)
            {
            farmText::pushrec1_5=0;
            farmText::Index1_5=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec1_6=0;
            farmText::Index1_6=-1;
            }break;
        }
        case 4:
        {
            if(combNum==1)
            {
            farmText::pushrec1_7=0;
            farmText::Index1_7=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec1_8=0;
                farmText::Index1_8=-1;
            }
            break;
        }
        case 5:
        {
            if(combNum==1)
            {
            farmText::pushrec1_9=0;
            farmText::Index1_9=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec1_10=0;
                farmText::Index1_10=-1;
            }
            break;
        }
        case 6:
        {
            if(combNum==1)
            {
            farmText::pushrec1_11=0;
            farmText::Index1_11=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec1_12=0;
                farmText::Index1_12=-1;
            }
            break;
        }
        }
        break;
    }
    case 2:
    {
        game::bpf.p2[rec-1].havePigNum--;
        if(combNum==1)
        game::bpf.p2[rec-1].comb1rec=0;
        else
            game::bpf.p2[rec-1].comb2rec=0;
        switch(rec)
        {
        case 1:
        {
            if(combNum==1)
            {
            farmText::pushrec2_1=0;
            farmText::Index2_1=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec2_2=0;
                farmText::Index2_2=-1;
            }
            break;
        }
        case 2:
        {
            if(combNum==1)
            {
            farmText::pushrec2_3=0;
            farmText::Index2_3=-1;
            }
            else if(combNum==2)
            {
            farmText::pushrec2_4=0;
            farmText::Index2_4=-1;
            }
            break;
        }
        case 3:
        {
            if(combNum==1)
            {
            farmText::pushrec2_5=0;
            farmText::Index2_5=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec2_6=0;
            farmText::Index2_6=-1;
            }break;
        }
        case 4:
        {
            if(combNum==1)
            {
            farmText::pushrec2_7=0;
            farmText::Index2_7=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec2_8=0;
                farmText::Index2_8=-1;
            }
            break;
        }
        case 5:
        {
            if(combNum==1)
            {
            farmText::pushrec2_9=0;
            farmText::Index2_9=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec2_10=0;
                farmText::Index2_10=-1;
            }
            break;
        }
        case 6:
        {
            if(combNum==1)
            {
            farmText::pushrec2_11=0;
            farmText::Index2_11=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec2_12=0;
                farmText::Index2_12=-1;
            }
            break;
        }
        }
        break;
    }
    case 3:
    {
        game::bpf.p3[rec-1].havePigNum--;
        if(combNum==1)
        game::bpf.p3[rec-1].comb1rec=0;
        else
            game::bpf.p3[rec-1].comb2rec=0;
        switch(rec)
        {
        case 1:
        {
            if(combNum==1)
            {
            farmText::pushrec3_1=0;
            farmText::Index3_1=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec3_2=0;
                farmText::Index3_2=-1;
            }
            break;
        }
        case 2:
        {
            if(combNum==1)
            {
            farmText::pushrec3_3=0;
            farmText::Index3_3=-1;
            }
            else if(combNum==2)
            {
            farmText::pushrec3_4=0;
            farmText::Index3_4=-1;
            }
            break;
        }
        case 3:
        {
            if(combNum==1)
            {
            farmText::pushrec3_5=0;
            farmText::Index3_5=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec3_6=0;
            farmText::Index3_6=-1;
            }break;
        }
        case 4:
        {
            if(combNum==1)
            {
            farmText::pushrec3_7=0;
            farmText::Index3_7=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec3_8=0;
                farmText::Index3_8=-1;
            }
            break;
        }
        case 5:
        {
            if(combNum==1)
            {
            farmText::pushrec3_9=0;
            farmText::Index3_9=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec3_10=0;
                farmText::Index3_10=-1;
            }
            break;
        }
        case 6:
        {
            if(combNum==1)
            {
            farmText::pushrec3_11=0;
            farmText::Index3_11=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec3_12=0;
                farmText::Index3_12=-1;
            }
            break;
        }
        }
        break;
    }
    case 4:
    {
        game::bpf.p4[rec-1].havePigNum--;
        if(combNum==1)
        game::bpf.p4[rec-1].comb1rec=0;
        else
            game::bpf.p4[rec-1].comb2rec=0;
        switch(rec)
        {
        case 1:
        {
            if(combNum==1)
            {
            farmText::pushrec4_1=0;
            farmText::Index4_1=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec4_2=0;
                farmText::Index4_2=-1;
            }
            break;
        }
        case 2:
        {
            if(combNum==1)
            {
            farmText::pushrec4_3=0;
            farmText::Index4_3=-1;
            }
            else if(combNum==2)
            {
            farmText::pushrec4_4=0;
            farmText::Index4_4=-1;
            }
            break;
        }
        case 3:
        {
            if(combNum==1)
            {
            farmText::pushrec4_5=0;
            farmText::Index4_5=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec4_6=0;
            farmText::Index4_6=-1;
            }break;
        }
        case 4:
        {
            if(combNum==1)
            {
            farmText::pushrec4_7=0;
            farmText::Index4_7=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec4_8=0;
                farmText::Index4_8=-1;
            }
            break;
        }
        case 5:
        {
            if(combNum==1)
            {
            farmText::pushrec4_9=0;
            farmText::Index4_9=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec4_10=0;
                farmText::Index4_10=-1;
            }
            break;
        }
        case 6:
        {
            if(combNum==1)
            {
            farmText::pushrec4_11=0;
            farmText::Index4_11=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec4_12=0;
                farmText::Index4_12=-1;
            }
            break;
        }
        }
        break;
    }
    case 5:
    {
        game::bpf.p5[rec-1].havePigNum--;
        if(combNum==1)
        game::bpf.p5[rec-1].comb1rec=0;
        else
            game::bpf.p5[rec-1].comb2rec=0;
        switch(rec)
        {
        case 1:
        {
            if(combNum==1)
            {
            farmText::pushrec5_1=0;
            farmText::Index5_1=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec5_2=0;
                farmText::Index5_2=-1;
            }
            break;
        }
        case 2:
        {
            if(combNum==1)
            {
            farmText::pushrec5_3=0;
            farmText::Index5_3=-1;
            }
            else if(combNum==2)
            {
            farmText::pushrec5_4=0;
            farmText::Index5_4=-1;
            }
            break;
        }
        case 3:
        {
            if(combNum==1)
            {
            farmText::pushrec5_5=0;
            farmText::Index5_5=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec5_6=0;
            farmText::Index5_6=-1;
            }break;
        }
        case 4:
        {
            if(combNum==1)
            {
            farmText::pushrec5_7=0;
            farmText::Index5_7=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec5_8=0;
                farmText::Index5_8=-1;
            }
            break;
        }
        case 5:
        {
            if(combNum==1)
            {
            farmText::pushrec5_9=0;
            farmText::Index5_9=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec5_10=0;
                farmText::Index5_10=-1;
            }
            break;
        }
        case 6:
        {
            if(combNum==1)
            {
            farmText::pushrec5_11=0;
            farmText::Index5_11=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec5_12=0;
                farmText::Index5_12=-1;
            }
            break;
        }
        }
        break;
    }
    case 6:
    {
        game::bpf.p6[rec-1].havePigNum--;
        if(combNum==1)
        game::bpf.p6[rec-1].comb1rec=0;
        else
            game::bpf.p6[rec-1].comb2rec=0;
        switch(rec)
        {
        case 1:
        {
            if(combNum==1)
            {
            farmText::pushrec6_1=0;
            farmText::Index6_1=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec6_2=0;
                farmText::Index6_2=-1;
            }
            break;
        }
        case 2:
        {
            if(combNum==1)
            {
            farmText::pushrec6_3=0;
            farmText::Index6_3=-1;
            }
            else if(combNum==2)
            {
            farmText::pushrec6_4=0;
            farmText::Index6_4=-1;
            }
            break;
        }
        case 3:
        {
            if(combNum==1)
            {
            farmText::pushrec6_5=0;
            farmText::Index6_5=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec6_6=0;
            farmText::Index6_6=-1;
            }break;
        }
        case 4:
        {
            if(combNum==1)
            {
            farmText::pushrec6_7=0;
            farmText::Index6_7=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec6_8=0;
                farmText::Index6_8=-1;
            }
            break;
        }
        case 5:
        {
            if(combNum==1)
            {
            farmText::pushrec6_9=0;
            farmText::Index6_9=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec6_10=0;
                farmText::Index6_10=-1;
            }
            break;
        }
        case 6:
        {
            if(combNum==1)
            {
            farmText::pushrec6_11=0;
            farmText::Index6_11=-1;
            }
            else if(combNum==2)
            {
                farmText::pushrec6_12=0;
                farmText::Index6_12=-1;
            }
            break;
        }
        }
        break;
    }
    }
}

void sell::on_btnSell_clicked()
{
    int i;
    if(ui->comboBox->currentIndex()==0)
        i=1;
    else
        i=2;
    sellPig(game::numrec,pigFarm::rec,i);
    game::money+=price;
    emit updatePig();
    close();
}

void sell::init(int numRec, int rec)
{
    ui->comboBox->clear();
    QString price1=NULL;
    QString price2=NULL;
    for(vector<whitePig>::iterator it1=buyPig::vw.begin();it1!=buyPig::vw.end();it1++)
    {
        if((*it1).NumRecPos==numRec&&(*it1).RecPos==rec-1&&((*it1).combPos==1||(*it1).combPos==2))
        {
            if((*it1).weight>=50)
            {
            ui->comboBox->addItem((*it1).name);
            if(price1==NULL)
                price1=QString::number((*it1).weight*10,10);
            else
                price2=QString::number((*it1).weight*10,10);
            }
        }
    }
    for(vector<blackPig>::iterator it2=buyPig::vb.begin();it2!=buyPig::vb.end();it2++)
    {
        if((*it2).NumRecPos==numRec&&(*it2).RecPos==rec-1&&((*it2).combPos==1||(*it2).combPos==2))
        {
            if((*it2).weight>=100)
            {
            ui->comboBox->addItem((*it2).name);
            if(price1==NULL)
                price1=QString::number((*it2).weight*15,10);
            else
                price2=QString::number((*it2).weight*15,10);
            }
        }
    }
    for(vector<huaPig>::iterator it3=buyPig::vh.begin();it3!=buyPig::vh.end();it3++)
    {
        if((*it3).NumRecPos==numRec&&(*it3).RecPos==rec-1&&((*it3).combPos==1||(*it3).combPos==2))
        {
            if((*it3).weight>=70)
            {
            ui->comboBox->addItem((*it3).name);
            if(price1==NULL)
                price1=QString::number((*it3).weight*20,10);
            else
                price2=QString::number((*it3).weight*20,10);
            }
        }
    }
    if(ui->comboBox->currentIndex()==0)
    ui->lblPrice->setText("卖出价格:"+price1);
    else
        ui->lblPrice->setText("卖出价格:"+price2);
   bool ok;
    if(price1!=NULL)
        price=price1.toInt(&ok,10);
    else if(price2!=NULL)
        price=price2.toInt(&ok,10);
//        qDebug()<<price;
}


