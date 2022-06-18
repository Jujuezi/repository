#include "pushtype.h"
#include "ui_pushtype.h"
int pushType::PushWhitePigNum=0;
int pushType::PushBlackPigNum=0;
int pushType::PushHuaPigNum=0;
int pushType::whiteii=0;
int pushType::blackii=0;
int pushType::huaii=0;
int pushType::emptyWhitePigNum=game::whitePigNum;
int pushType::emptyBlackPigNum=game::blackPigNum;
int pushType::emptyHuaPigNum=game::huaPigNum;



pushType::pushType(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pushType)
{
    ui->setupUi(this);
    combboxInit();
    updateText();
    if(emptyWhitePigNum+emptyBlackPigNum+emptyHuaPigNum==0)
    {
//        QMessageBox::information(this,"没有小猪！","你没有可放置的小猪了！");
        ui->comboBox->addItem("无");
        qDebug()<<ui->comboBox->currentIndex();
        ui->comboBox_2->addItem("无");
    }
    ui->lblpig1->setText("猪栏坑位1：");
    ui->lblpig2->setText("猪栏坑位2：");
    ui->btnCancel->setFlat(true);
    ui->btnPush->setFlat(true);
}


void pushType::updateText()
{
    emptyWhitePigNum=game::whitePigNum-PushWhitePigNum;
    emptyBlackPigNum=game::blackPigNum-PushBlackPigNum;
    emptyHuaPigNum=game::huaPigNum-PushHuaPigNum;
    switch(game::numrec)
    {
    case 1:
    {
    if(game::bpf.p1[pigFarm::rec-1].comb1rec!=0)
    {
       ui->comboBox->clear();
       ui->comboBox->addItem("坑位1已有小猪");
       ui->comboBox->setEnabled(false);
    }
    if(game::bpf.p1[pigFarm::rec-1].comb2rec!=0)
    {
        ui->comboBox_2->clear();
        ui->comboBox_2->addItem("坑位2已有小猪");
        ui->comboBox_2->setEnabled(false);
    }
    }
    case 2:
    {
        if(game::bpf.p2[pigFarm::rec-1].comb1rec!=0)
        {
           ui->comboBox->clear();
           ui->comboBox->addItem("坑位1已有小猪");
           ui->comboBox->setEnabled(false);
        }
        if(game::bpf.p2[pigFarm::rec-1].comb2rec!=0)
        {
            ui->comboBox_2->clear();
            ui->comboBox_2->addItem("坑位2已有小猪");
            ui->comboBox_2->setEnabled(false);
        }
    }
    case 3:
    {
        if(game::bpf.p3[pigFarm::rec-1].comb1rec!=0)
        {
           ui->comboBox->clear();
           ui->comboBox->addItem("坑位1已有小猪");
           ui->comboBox->setEnabled(false);
        }
        if(game::bpf.p3[pigFarm::rec-1].comb2rec!=0)
        {
            ui->comboBox_2->clear();
            ui->comboBox_2->addItem("坑位2已有小猪");
            ui->comboBox_2->setEnabled(false);
        }
    }
    case 4:
    {
        if(game::bpf.p4[pigFarm::rec-1].comb1rec!=0)
        {
           ui->comboBox->clear();
           ui->comboBox->addItem("坑位1已有小猪");
           ui->comboBox->setEnabled(false);
        }
        if(game::bpf.p4[pigFarm::rec-1].comb2rec!=0)
        {
            ui->comboBox_2->clear();
            ui->comboBox_2->addItem("坑位2已有小猪");
            ui->comboBox_2->setEnabled(false);
        }
    }
    case 5:
    {
        if(game::bpf.p5[pigFarm::rec-1].comb1rec!=0)
        {
           ui->comboBox->clear();
           ui->comboBox->addItem("坑位1已有小猪");
           ui->comboBox->setEnabled(false);
        }
        if(game::bpf.p5[pigFarm::rec-1].comb2rec!=0)
        {
            ui->comboBox_2->clear();
            ui->comboBox_2->addItem("坑位2已有小猪");
            ui->comboBox_2->setEnabled(false);
        }
    }
    case 6:
    {
        if(game::bpf.p6[pigFarm::rec-1].comb1rec!=0)
        {
           ui->comboBox->clear();
           ui->comboBox->addItem("坑位1已有小猪");
           ui->comboBox->setEnabled(false);
        }
        if(game::bpf.p6[pigFarm::rec-1].comb2rec!=0)
        {
            ui->comboBox_2->clear();
            ui->comboBox_2->addItem("坑位2已有小猪");
            ui->comboBox_2->setEnabled(false);
        }
    }
    }
}

void pushType::combboxInit()
{
//    qDebug()<<game::whitePigNum<<game::blackPigNum<<game::huaPigNum;
//    qDebug()<<emptyWhitePigNum<<emptyBlackPigNum<<emptyHuaPigNum;
    if(emptyWhitePigNum!=0||emptyBlackPigNum!=0||emptyHuaPigNum!=0)
    {
        ui->comboBox->addItem("无");
        ui->comboBox_2->addItem("无");

        if(emptyWhitePigNum!=0)
        {
        ui->comboBox->addItem(buyPig::vw[0].name);
        ui->comboBox_2->addItem(buyPig::vw[0].name);

        }
        if(emptyBlackPigNum!=0)
        {
        ui->comboBox->addItem(buyPig::vb[0].name);
        ui->comboBox_2->addItem(buyPig::vb[0].name);

        }
        if(emptyHuaPigNum!=0)
        {
        ui->comboBox->addItem(buyPig::vh[0].name);
        ui->comboBox_2->addItem(buyPig::vh[0].name);
        }
    }
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)
        ui->comboBox_2->setEnabled(false);
    else
        ui->comboBox_2->setEnabled(true);
}

pushType::~pushType()
{
    delete ui;
}

void pushType::on_btnCancel_clicked()
{
    close();
}

void pushType::on_btnPush_clicked()
{
    switch(game::numrec)
    {
    case 1:
    {
    if(game::bpf.p1[pigFarm::rec-1].comb1rec==0)//猪栏1为空
    {
    if(ui->comboBox->currentText()=="白猪")
    {
        emptyWhitePigNum--;
        PushWhitePigNum++;
        game::bpf.p1[pigFarm::rec-1].havePigNum++;
        buyPig::vw[whiteii].pushRec=1;
        buyPig::vw[whiteii].NumRecPos=game::numrec;
        buyPig::vw[whiteii].RecPos=pigFarm::rec-1;
        buyPig::vw[whiteii].combPos=1;
        game::bpf.p1[pigFarm::rec-1].comb1rec=1;
        game::bpf.p1[pigFarm::rec-1].pigName1="白猪";//储存放入的该小猪信息
        game::bpf.p1[pigFarm::rec-1].weight1=QString::number(buyPig::vw[whiteii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();//发送信号 farmtext保存下标值
//        qDebug()<<"whiteii:"<<whiteii;
        whiteii++;
        emit push();
        close();
    }
    else if(ui->comboBox->currentText()=="黑猪")
    {
        emptyBlackPigNum--;
        PushBlackPigNum++;
        game::bpf.p1[pigFarm::rec-1].comb1rec=2;
        game::bpf.p1[pigFarm::rec-1].havePigNum++;
        buyPig::vb[blackii].pushRec=1;
        buyPig::vb[blackii].NumRecPos=game::numrec;
        buyPig::vb[blackii].RecPos=pigFarm::rec-1;
        buyPig::vb[blackii].combPos=1;
        game::bpf.p1[pigFarm::rec-1].pigName1="黑猪";//储存放入的该小猪信息
        game::bpf.p1[pigFarm::rec-1].weight1=QString::number(buyPig::vb[blackii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        blackii++;
        emit push();
        close();
    }
    else if(ui->comboBox->currentText()=="花猪")
    {
        emptyHuaPigNum--;
        PushHuaPigNum++;
        game::bpf.p1[pigFarm::rec-1].comb1rec=3;
        game::bpf.p1[pigFarm::rec-1].havePigNum++;
        buyPig::vh[huaii].pushRec=1;
        buyPig::vh[huaii].NumRecPos=game::numrec;
        buyPig::vh[huaii].RecPos=pigFarm::rec-1;
        buyPig::vh[huaii].combPos=1;
        game::bpf.p1[pigFarm::rec-1].pigName1="花猪";//储存放入的该小猪信息
        game::bpf.p1[pigFarm::rec-1].weight1=QString::number(buyPig::vh[huaii].weight,10);
        emit preserveIndex();
        huaii++;
        emit push();
        close();
    }
    }


    if(game::bpf.p1[pigFarm::rec-1].comb2rec==0)
    {    
    if(ui->comboBox_2->currentText()=="白猪")
    {
        emptyWhitePigNum--;
        PushWhitePigNum++;
        game::bpf.p1[pigFarm::rec-1].comb2rec=1;
        game::bpf.p1[pigFarm::rec-1].havePigNum++;
        buyPig::vw[whiteii].pushRec=1;
        buyPig::vw[whiteii].NumRecPos=game::numrec;
        buyPig::vw[whiteii].RecPos=pigFarm::rec-1;
        buyPig::vw[whiteii].combPos=2;
        game::bpf.p1[pigFarm::rec-1].pigName2="白猪";//储存放入的该小猪信息
        game::bpf.p1[pigFarm::rec-1].weight2=QString::number(buyPig::vw[whiteii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        whiteii++;
        emit push();
        close();
    }
    else if(ui->comboBox_2->currentText()=="黑猪")
    {
        emptyBlackPigNum--;
        PushBlackPigNum++;
        game::bpf.p1[pigFarm::rec-1].comb2rec=2;
        game::bpf.p1[pigFarm::rec-1].havePigNum++;
        buyPig::vb[blackii].pushRec=1;
        buyPig::vb[blackii].NumRecPos=game::numrec;
        buyPig::vb[blackii].RecPos=pigFarm::rec-1;
        buyPig::vb[blackii].combPos=2;
        game::bpf.p1[pigFarm::rec-1].comb2rec=2;

        game::bpf.p1[pigFarm::rec-1].pigName2="黑猪";//储存放入的该小猪信息
        game::bpf.p1[pigFarm::rec-1].weight2=QString::number(buyPig::vb[blackii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        blackii++;
        emit push();
        close();
    }
    else if(ui->comboBox_2->currentText()=="花猪")
    {
        emptyHuaPigNum--;
        PushHuaPigNum++;
        game::bpf.p1[pigFarm::rec-1].comb2rec=3;
        game::bpf.p1[pigFarm::rec-1].havePigNum++;
        buyPig::vh[huaii].pushRec=1;
        buyPig::vh[huaii].NumRecPos=game::numrec;
        buyPig::vh[huaii].RecPos=pigFarm::rec-1;
        buyPig::vh[huaii].combPos=2;
        game::bpf.p1[pigFarm::rec-1].pigName2="花猪";//储存放入的该小猪信息
        game::bpf.p1[pigFarm::rec-1].weight2=QString::number(buyPig::vh[huaii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        huaii++;
        emit push();
        close();
    }
    }

    break;
    }
    case 2:
    {
        if(game::bpf.p2[pigFarm::rec-1].comb1rec==0)
        {
        if(ui->comboBox->currentText()=="白猪")
        {
            emptyWhitePigNum--;
            PushWhitePigNum++;
            game::bpf.p2[pigFarm::rec-1].comb1rec=1;
            game::bpf.p2[pigFarm::rec-1].havePigNum++;
            buyPig::vw[whiteii].pushRec=1;
            buyPig::vw[whiteii].NumRecPos=game::numrec;
            buyPig::vw[whiteii].RecPos=pigFarm::rec-1;
            buyPig::vw[whiteii].combPos=1;
            game::bpf.p2[pigFarm::rec-1].comb1rec=1;
            game::bpf.p2[pigFarm::rec-1].pigName1="白猪";//储存放入的该小猪信息
            game::bpf.p2[pigFarm::rec-1].weight1=QString::number(buyPig::vw[whiteii].weight,10);
            //sellTime1=QString::number()
            emit preserveIndex();
            whiteii++;

            emit push();
            close();
        }
        else if(ui->comboBox->currentText()=="黑猪")
        {
            emptyBlackPigNum--;
            PushBlackPigNum++;
            game::bpf.p2[pigFarm::rec-1].comb1rec=2;
            game::bpf.p2[pigFarm::rec-1].havePigNum++;
            buyPig::vb[blackii].pushRec=1;
            buyPig::vb[blackii].NumRecPos=game::numrec;
            buyPig::vb[blackii].RecPos=pigFarm::rec-1;
            buyPig::vb[blackii].combPos=1;
            game::bpf.p2[pigFarm::rec-1].pigName1="黑猪";//储存放入的该小猪信息
            game::bpf.p2[pigFarm::rec-1].weight1=QString::number(buyPig::vb[blackii].weight,10);
            //sellTime1=QString::number()
            emit preserveIndex();
            blackii++;
            emit push();
            close();
        }
        else if(ui->comboBox->currentText()=="花猪")
        {
            emptyHuaPigNum--;
            PushHuaPigNum++;
            game::bpf.p2[pigFarm::rec-1].comb1rec=3;
            game::bpf.p2[pigFarm::rec-1].havePigNum++;
            buyPig::vh[huaii].pushRec=1;
            buyPig::vh[huaii].NumRecPos=game::numrec;
            buyPig::vh[huaii].RecPos=pigFarm::rec-1;
            buyPig::vh[huaii].combPos=1;
            game::bpf.p2[pigFarm::rec-1].pigName1="花猪";//储存放入的该小猪信息
            game::bpf.p2[pigFarm::rec-1].weight1=QString::number(buyPig::vh[huaii].weight,10);
            //sellTime1=QString::number()
            emit preserveIndex();
            huaii++;
            emit push();
            close();
        }
        }

        if(game::bpf.p2[pigFarm::rec-1].comb2rec==0)
        {
        if(ui->comboBox_2->currentText()=="白猪")
        {
            emptyWhitePigNum--;
            PushWhitePigNum++;
            game::bpf.p2[pigFarm::rec-1].comb2rec=1;
            game::bpf.p2[pigFarm::rec-1].havePigNum++;
            buyPig::vw[whiteii].pushRec=1;
            buyPig::vw[whiteii].NumRecPos=game::numrec;
            buyPig::vw[whiteii].RecPos=pigFarm::rec-1;
            buyPig::vw[whiteii].combPos=2;
            game::bpf.p2[pigFarm::rec-1].pigName2="白猪";//储存放入的该小猪信息
            game::bpf.p2[pigFarm::rec-1].weight2=QString::number(buyPig::vw[whiteii].weight,10);
            //sellTime1=QString::number()
            emit preserveIndex();
            whiteii++;
            emit push();
            close();
        }
        else if(ui->comboBox_2->currentText()=="黑猪")
        {
            emptyBlackPigNum--;
            PushBlackPigNum++;
            game::bpf.p2[pigFarm::rec-1].comb2rec=2;
            game::bpf.p2[pigFarm::rec-1].havePigNum++;
            buyPig::vb[blackii].pushRec=1;
            buyPig::vb[blackii].NumRecPos=game::numrec;
            buyPig::vb[blackii].RecPos=pigFarm::rec-1;
            buyPig::vb[blackii].combPos=2;
            game::bpf.p2[pigFarm::rec-1].pigName2="黑猪";//储存放入的该小猪信息
            game::bpf.p2[pigFarm::rec-1].weight2=QString::number(buyPig::vb[blackii].weight,10);
            //sellTime1=QString::number()
            emit preserveIndex();
            blackii++;
            emit push();
            close();
        }
        else if(ui->comboBox_2->currentText()=="花猪")
        {
            emptyHuaPigNum--;
            PushHuaPigNum++;
            game::bpf.p2[pigFarm::rec-1].comb2rec=3;
            game::bpf.p2[pigFarm::rec-1].havePigNum++;
            buyPig::vh[huaii].pushRec=1;
            buyPig::vh[huaii].NumRecPos=game::numrec;
            buyPig::vh[huaii].RecPos=pigFarm::rec-1;
            buyPig::vh[huaii].combPos=2;
            game::bpf.p2[pigFarm::rec-1].pigName2="花猪";//储存放入的该小猪信息
            game::bpf.p2[pigFarm::rec-1].weight2=QString::number(buyPig::vh[huaii].weight,10);
            //sellTime1=QString::number()
            emit preserveIndex();
            huaii++;
            emit push();
            close();
        }
        }

        break;
    }
    case 3:
    {
    if(game::bpf.p3[pigFarm::rec-1].comb1rec==0)
    {
    if(ui->comboBox->currentText()=="白猪")
    {
        emptyWhitePigNum--;
        PushWhitePigNum++;
        game::bpf.p3[pigFarm::rec-1].comb1rec=2;
        game::bpf.p3[pigFarm::rec-1].havePigNum++;
        buyPig::vw[whiteii].pushRec=1;
        buyPig::vw[whiteii].NumRecPos=game::numrec;
        buyPig::vw[whiteii].RecPos=pigFarm::rec-1;
        buyPig::vw[whiteii].combPos=1;
        game::bpf.p3[pigFarm::rec-1].comb1rec=1;
        game::bpf.p3[pigFarm::rec-1].pigName1="白猪";//储存放入的该小猪信息
        game::bpf.p3[pigFarm::rec-1].weight1=QString::number(buyPig::vw[whiteii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        whiteii++;

        emit push();
        close();
    }
    else if(ui->comboBox->currentText()=="黑猪")
    {
        emptyBlackPigNum--;
        PushBlackPigNum++;
        game::bpf.p3[pigFarm::rec-1].comb1rec=2;
        game::bpf.p3[pigFarm::rec-1].havePigNum++;
        buyPig::vb[blackii].pushRec=1;
        buyPig::vb[blackii].NumRecPos=game::numrec;
        buyPig::vb[blackii].RecPos=pigFarm::rec-1;
        buyPig::vb[blackii].combPos=1;
        game::bpf.p3[pigFarm::rec-1].pigName1="黑猪";//储存放入的该小猪信息
        game::bpf.p3[pigFarm::rec-1].weight1=QString::number(buyPig::vb[blackii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        blackii++;
        emit push();
        close();
    }
    else if(ui->comboBox->currentText()=="花猪")
    {
        emptyHuaPigNum--;
        PushHuaPigNum++;
        game::bpf.p3[pigFarm::rec-1].comb1rec=3;
        game::bpf.p3[pigFarm::rec-1].havePigNum++;
        buyPig::vh[huaii].pushRec=1;
        buyPig::vh[huaii].NumRecPos=game::numrec;
        buyPig::vh[huaii].RecPos=pigFarm::rec-1;
        buyPig::vh[huaii].combPos=1;
        game::bpf.p3[pigFarm::rec-1].pigName1="花猪";//储存放入的该小猪信息
        game::bpf.p3[pigFarm::rec-1].weight1=QString::number(buyPig::vh[huaii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        huaii++;
        emit push();
        close();
    }
    }


    if(game::bpf.p3[pigFarm::rec-1].comb2rec==0)
    {
    if(ui->comboBox_2->currentText()=="白猪")
    {
        emptyWhitePigNum--;
        PushWhitePigNum++;
        game::bpf.p3[pigFarm::rec-1].comb2rec=1;
        game::bpf.p3[pigFarm::rec-1].havePigNum++;
        buyPig::vw[whiteii].pushRec=1;
        buyPig::vw[whiteii].NumRecPos=game::numrec;
        buyPig::vw[whiteii].RecPos=pigFarm::rec-1;
        buyPig::vw[whiteii].combPos=2;
        game::bpf.p3[pigFarm::rec-1].pigName2="白猪";//储存放入的该小猪信息
        game::bpf.p3[pigFarm::rec-1].weight2=QString::number(buyPig::vw[whiteii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        whiteii++;
        emit push();
        close();
    }
    else if(ui->comboBox_2->currentText()=="黑猪")
    {
        emptyBlackPigNum--;
        PushBlackPigNum++;
        game::bpf.p3[pigFarm::rec-1].havePigNum++;
        buyPig::vb[blackii].pushRec=1;
        buyPig::vb[blackii].NumRecPos=game::numrec;
        buyPig::vb[blackii].RecPos=pigFarm::rec-1;
        game::bpf.p3[pigFarm::rec-1].comb2rec=2;
        buyPig::vb[blackii].combPos=2;
        game::bpf.p3[pigFarm::rec-1].pigName2="黑猪";//储存放入的该小猪信息
        game::bpf.p3[pigFarm::rec-1].weight2=QString::number(buyPig::vb[blackii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        blackii++;
        emit push();
        close();
    }
    else if(ui->comboBox_2->currentText()=="花猪")
    {
        emptyHuaPigNum--;
        PushHuaPigNum++;
        game::bpf.p3[pigFarm::rec-1].comb2rec=3;
        game::bpf.p3[pigFarm::rec-1].havePigNum++;
        buyPig::vh[huaii].pushRec=1;
        buyPig::vh[huaii].NumRecPos=game::numrec;
        buyPig::vh[huaii].RecPos=pigFarm::rec-1;
        buyPig::vh[huaii].combPos=2;
        game::bpf.p3[pigFarm::rec-1].pigName2="花猪";//储存放入的该小猪信息
        game::bpf.p3[pigFarm::rec-1].weight2=QString::number(buyPig::vh[huaii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        huaii++;
        emit push();
        close();
    }
    }

    break;
    }
    case 4:
    {
    if(game::bpf.p4[pigFarm::rec-1].comb1rec==0)//猪栏1为空
    {
    if(ui->comboBox->currentText()=="白猪")
    {
        emptyWhitePigNum--;
        PushWhitePigNum++;
        game::bpf.p4[pigFarm::rec-1].comb1rec=1;
        game::bpf.p4[pigFarm::rec-1].havePigNum++;
        buyPig::vw[whiteii].pushRec=1;
        buyPig::vw[whiteii].NumRecPos=game::numrec;
        buyPig::vw[whiteii].RecPos=pigFarm::rec-1;
        buyPig::vw[whiteii].combPos=1;
        game::bpf.p4[pigFarm::rec-1].comb1rec=1;
        game::bpf.p4[pigFarm::rec-1].pigName1="白猪";//储存放入的该小猪信息
        game::bpf.p4[pigFarm::rec-1].weight1=QString::number(buyPig::vw[whiteii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        whiteii++;

        emit push();
        close();
    }
    else if(ui->comboBox->currentText()=="黑猪")
    {
        emptyBlackPigNum--;
        PushBlackPigNum++;
        game::bpf.p4[pigFarm::rec-1].comb1rec=2;
        game::bpf.p4[pigFarm::rec-1].havePigNum++;
        buyPig::vb[blackii].pushRec=1;
        buyPig::vb[blackii].NumRecPos=game::numrec;
        buyPig::vb[blackii].RecPos=pigFarm::rec-1;
        buyPig::vb[blackii].combPos=1;
        game::bpf.p4[pigFarm::rec-1].pigName1="黑猪";//储存放入的该小猪信息
        game::bpf.p4[pigFarm::rec-1].weight1=QString::number(buyPig::vb[blackii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        blackii++;
        emit push();
        close();
    }
    else if(ui->comboBox->currentText()=="花猪")
    {
        emptyHuaPigNum--;
        PushHuaPigNum++;
        game::bpf.p4[pigFarm::rec-1].comb1rec=3;
        game::bpf.p4[pigFarm::rec-1].havePigNum++;
        buyPig::vh[huaii].pushRec=1;
        buyPig::vh[huaii].NumRecPos=game::numrec;
        buyPig::vh[huaii].RecPos=pigFarm::rec-1;
        buyPig::vh[huaii].combPos=1;
        game::bpf.p4[pigFarm::rec-1].pigName1="花猪";//储存放入的该小猪信息
        game::bpf.p4[pigFarm::rec-1].weight1=QString::number(buyPig::vh[huaii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        huaii++;
        emit push();
        close();
    }
    }


    if(game::bpf.p4[pigFarm::rec-1].comb2rec==0)
    {
    if(ui->comboBox_2->currentText()=="白猪")
    {
        emptyWhitePigNum--;
        PushWhitePigNum++;
        game::bpf.p4[pigFarm::rec-1].comb2rec=1;
        game::bpf.p4[pigFarm::rec-1].havePigNum++;
        buyPig::vw[whiteii].pushRec=1;
        buyPig::vw[whiteii].NumRecPos=game::numrec;
        buyPig::vw[whiteii].RecPos=pigFarm::rec-1;
        buyPig::vw[whiteii].combPos=2;
        game::bpf.p4[pigFarm::rec-1].pigName2="白猪";//储存放入的该小猪信息
        game::bpf.p4[pigFarm::rec-1].weight2=QString::number(buyPig::vw[whiteii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        whiteii++;
        emit push();
        close();
    }
    else if(ui->comboBox_2->currentText()=="黑猪")
    {
        emptyBlackPigNum--;
        PushBlackPigNum++;
        game::bpf.p4[pigFarm::rec-1].comb2rec=2;
        game::bpf.p4[pigFarm::rec-1].havePigNum++;
        buyPig::vb[blackii].pushRec=1;
        buyPig::vb[blackii].NumRecPos=game::numrec;
        buyPig::vb[blackii].RecPos=pigFarm::rec-1;
        game::bpf.p4[pigFarm::rec-1].comb2rec=2;
        buyPig::vb[blackii].combPos=2;
        game::bpf.p4[pigFarm::rec-1].pigName2="黑猪";//储存放入的该小猪信息
        game::bpf.p4[pigFarm::rec-1].weight2=QString::number(buyPig::vb[blackii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        blackii++;
        emit push();
        close();
    }
    else if(ui->comboBox_2->currentText()=="花猪")
    {
        emptyHuaPigNum--;
        PushHuaPigNum++;
        game::bpf.p4[pigFarm::rec-1].comb2rec=3;
        game::bpf.p4[pigFarm::rec-1].havePigNum++;
        buyPig::vh[huaii].pushRec=1;
        buyPig::vh[huaii].NumRecPos=game::numrec;
        buyPig::vh[huaii].RecPos=pigFarm::rec-1;
        buyPig::vh[huaii].combPos=2;
        game::bpf.p4[pigFarm::rec-1].pigName2="花猪";//储存放入的该小猪信息
        game::bpf.p4[pigFarm::rec-1].weight2=QString::number(buyPig::vh[huaii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        huaii++;
        emit push();
        close();
    }
    }

    break;
    }
    case 5:
    {
    if(game::bpf.p5[pigFarm::rec-1].comb1rec==0)//猪栏1为空
    {
    if(ui->comboBox->currentText()=="白猪")
    {
        emptyWhitePigNum--;
        PushWhitePigNum++;
        game::bpf.p5[pigFarm::rec-1].havePigNum++;
        buyPig::vw[whiteii].pushRec=1;
        buyPig::vw[whiteii].NumRecPos=game::numrec;
        buyPig::vw[whiteii].RecPos=pigFarm::rec-1;
        buyPig::vw[whiteii].combPos=1;
        game::bpf.p5[pigFarm::rec-1].comb1rec=1;
        game::bpf.p5[pigFarm::rec-1].pigName1="白猪";//储存放入的该小猪信息
        game::bpf.p5[pigFarm::rec-1].weight1=QString::number(buyPig::vw[whiteii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        whiteii++;

        emit push();
        close();
    }
    else if(ui->comboBox->currentText()=="黑猪")
    {
        emptyBlackPigNum--;
        PushBlackPigNum++;
        game::bpf.p5[pigFarm::rec-1].comb1rec=2;
        game::bpf.p5[pigFarm::rec-1].havePigNum++;
        buyPig::vb[blackii].pushRec=1;
        buyPig::vb[blackii].NumRecPos=game::numrec;
        buyPig::vb[blackii].RecPos=pigFarm::rec-1;
        buyPig::vb[blackii].combPos=1;
        game::bpf.p5[pigFarm::rec-1].pigName1="黑猪";//储存放入的该小猪信息
        game::bpf.p5[pigFarm::rec-1].weight1=QString::number(buyPig::vb[blackii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        blackii++;
        emit push();
        close();
    }
    else if(ui->comboBox->currentText()=="花猪")
    {
        emptyHuaPigNum--;
        PushHuaPigNum++;
        game::bpf.p5[pigFarm::rec-1].comb1rec=3;
        game::bpf.p5[pigFarm::rec-1].havePigNum++;
        buyPig::vh[huaii].pushRec=1;
        buyPig::vh[huaii].NumRecPos=game::numrec;
        buyPig::vh[huaii].RecPos=pigFarm::rec-1;
        buyPig::vh[huaii].combPos=1;
        game::bpf.p5[pigFarm::rec-1].pigName1="花猪";//储存放入的该小猪信息
        game::bpf.p5[pigFarm::rec-1].weight1=QString::number(buyPig::vh[huaii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        huaii++;
        emit push();
        close();
    }
    }


    if(game::bpf.p5[pigFarm::rec-1].comb2rec==0)
    {
    if(ui->comboBox_2->currentText()=="白猪")
    {
        emptyWhitePigNum--;
        PushWhitePigNum++;
        game::bpf.p5[pigFarm::rec-1].comb2rec=1;
        game::bpf.p5[pigFarm::rec-1].havePigNum++;
        buyPig::vw[whiteii].pushRec=1;
        buyPig::vw[whiteii].NumRecPos=game::numrec;
        buyPig::vw[whiteii].RecPos=pigFarm::rec-1;
        buyPig::vw[whiteii].combPos=2;
        game::bpf.p5[pigFarm::rec-1].pigName2="白猪";//储存放入的该小猪信息
        game::bpf.p5[pigFarm::rec-1].weight2=QString::number(buyPig::vw[whiteii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        whiteii++;
        emit push();
        close();
    }
    else if(ui->comboBox_2->currentText()=="黑猪")
    {
        emptyBlackPigNum--;
        PushBlackPigNum++;
        game::bpf.p5[pigFarm::rec-1].havePigNum++;
        buyPig::vb[blackii].pushRec=1;
        buyPig::vb[blackii].NumRecPos=game::numrec;
        buyPig::vb[blackii].RecPos=pigFarm::rec-1;
        game::bpf.p5[pigFarm::rec-1].comb2rec=2;
        buyPig::vb[blackii].combPos=2;
        game::bpf.p5[pigFarm::rec-1].pigName2="黑猪";//储存放入的该小猪信息
        game::bpf.p5[pigFarm::rec-1].weight2=QString::number(buyPig::vb[blackii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        blackii++;
        emit push();
        close();
    }
    else if(ui->comboBox_2->currentText()=="花猪")
    {
        emptyHuaPigNum--;
        PushHuaPigNum++;
        game::bpf.p5[pigFarm::rec-1].comb1rec=3;
        game::bpf.p5[pigFarm::rec-1].havePigNum++;
        buyPig::vh[huaii].pushRec=1;
        buyPig::vh[huaii].NumRecPos=game::numrec;
        buyPig::vh[huaii].RecPos=pigFarm::rec-1;
        buyPig::vh[huaii].combPos=2;
        game::bpf.p5[pigFarm::rec-1].pigName2="花猪";//储存放入的该小猪信息
        game::bpf.p5[pigFarm::rec-1].weight2=QString::number(buyPig::vh[huaii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        huaii++;
        emit push();
        close();
    }
    }

    break;
    }
    case 6:
    {
    if(game::bpf.p6[pigFarm::rec-1].comb1rec==0)//猪栏1为空
    {
    if(ui->comboBox->currentText()=="白猪")
    {
        emptyWhitePigNum--;
        PushWhitePigNum++;
        game::bpf.p6[pigFarm::rec-1].havePigNum++;
        buyPig::vw[whiteii].pushRec=1;
        buyPig::vw[whiteii].NumRecPos=game::numrec;
        buyPig::vw[whiteii].RecPos=pigFarm::rec-1;
        buyPig::vw[whiteii].combPos=1;
        game::bpf.p6[pigFarm::rec-1].comb1rec=1;
        game::bpf.p6[pigFarm::rec-1].pigName1="白猪";//储存放入的该小猪信息
        game::bpf.p6[pigFarm::rec-1].weight1=QString::number(buyPig::vw[whiteii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        whiteii++;

        emit push();
        close();
    }
    else if(ui->comboBox->currentText()=="黑猪")
    {
        emptyBlackPigNum--;
        PushBlackPigNum++;
        game::bpf.p6[pigFarm::rec-1].comb1rec=2;
        game::bpf.p6[pigFarm::rec-1].havePigNum++;
        buyPig::vb[blackii].pushRec=1;
        buyPig::vb[blackii].NumRecPos=game::numrec;
        buyPig::vb[blackii].RecPos=pigFarm::rec-1;
        buyPig::vb[blackii].combPos=1;
        game::bpf.p6[pigFarm::rec-1].pigName1="黑猪";//储存放入的该小猪信息
        game::bpf.p6[pigFarm::rec-1].weight1=QString::number(buyPig::vb[blackii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        blackii++;
        emit push();
        close();
    }
    else if(ui->comboBox->currentText()=="花猪")
    {
        emptyHuaPigNum--;
        PushHuaPigNum++;
        game::bpf.p6[pigFarm::rec-1].comb1rec=3;
        game::bpf.p6[pigFarm::rec-1].havePigNum++;
        buyPig::vh[huaii].pushRec=1;
        buyPig::vh[huaii].NumRecPos=game::numrec;
        buyPig::vh[huaii].RecPos=pigFarm::rec-1;
        buyPig::vh[huaii].combPos=1;
        game::bpf.p6[pigFarm::rec-1].pigName1="花猪";//储存放入的该小猪信息
        game::bpf.p6[pigFarm::rec-1].weight1=QString::number(buyPig::vh[huaii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        huaii++;
        emit push();
        close();
    }
    }


    if(game::bpf.p6[pigFarm::rec-1].comb2rec==0)
    {
    if(ui->comboBox_2->currentText()=="白猪")
    {
        emptyWhitePigNum--;
        PushWhitePigNum++;
        game::bpf.p6[pigFarm::rec-1].comb2rec=1;
        game::bpf.p6[pigFarm::rec-1].havePigNum++;
        buyPig::vw[whiteii].pushRec=1;
        buyPig::vw[whiteii].NumRecPos=game::numrec;
        buyPig::vw[whiteii].RecPos=pigFarm::rec-1;
        buyPig::vw[whiteii].combPos=2;
        game::bpf.p6[pigFarm::rec-1].pigName2="白猪";//储存放入的该小猪信息
        game::bpf.p6[pigFarm::rec-1].weight2=QString::number(buyPig::vw[whiteii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        whiteii++;
        emit push();
        close();
    }
    else if(ui->comboBox_2->currentText()=="黑猪")
    {
        emptyBlackPigNum--;
        PushBlackPigNum++;
        game::bpf.p6[pigFarm::rec-1].havePigNum++;
        buyPig::vb[blackii].pushRec=1;
        buyPig::vb[blackii].NumRecPos=game::numrec;
        buyPig::vb[blackii].RecPos=pigFarm::rec-1;
        game::bpf.p6[pigFarm::rec-1].comb2rec=2;
        buyPig::vb[blackii].combPos=2;
        game::bpf.p6[pigFarm::rec-1].pigName2="黑猪";//储存放入的该小猪信息
        game::bpf.p6[pigFarm::rec-1].weight2=QString::number(buyPig::vb[blackii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        blackii++;
        emit push();
        close();
    }
    else if(ui->comboBox_2->currentText()=="花猪")
    {
        emptyHuaPigNum--;
        PushHuaPigNum++;
        game::bpf.p6[pigFarm::rec-1].comb2rec=3;
        game::bpf.p6[pigFarm::rec-1].havePigNum++;
        buyPig::vh[huaii].pushRec=1;
        buyPig::vh[huaii].NumRecPos=game::numrec;
        buyPig::vh[huaii].RecPos=pigFarm::rec-1;
        buyPig::vh[huaii].combPos=2;
        game::bpf.p6[pigFarm::rec-1].pigName2="花猪";//储存放入的该小猪信息
        game::bpf.p6[pigFarm::rec-1].weight2=QString::number(buyPig::vh[huaii].weight,10);
        //sellTime1=QString::number()
        emit preserveIndex();
        huaii++;
        emit push();
        close();
    }
    }

    break;
    }

    }
//    for(auto it:buyPig::vw)
//    {
//        qDebug()<<it.NumRecPos<<" "<<it.RecPos<<" "<<it.combPos;
//    }
    updateText();
}

