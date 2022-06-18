#include "buypig.h"
#include "ui_buypig.h"

vector<whitePig> buyPig::vw;//存放猪的数组
vector<blackPig> buyPig::vb;
vector<huaPig> buyPig::vh;
bool buyPig::pigFlag=false;
bool buyPig::foodFlag=false;

buyPig::buyPig(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buyPig)
{
    ui->setupUi(this);
    ui->btnOK->setFlat(true);
    ui->btnCancel->setFlat(true);
}

buyPig::~buyPig()
{
    delete ui;
}



void buyPig::on_spinBox_valueChanged(int arg1)
{
    ui->horizontalSlider->setValue(arg1);
}



void buyPig::on_horizontalSlider_valueChanged(int value)
{
    ui->spinBox->setValue(value);
}



void buyPig::on_btnOK_clicked()
{
    if(pigFlag)
    {
    switch(shop::n)
    {
    case 1:
    {
    int temp=ui->spinBox->value();//购买的猪数量
    if(game::money>temp*shop::whitePrice)//判断钱够不够
    {
        if(temp==0)
        {
            QMessageBox::information(this,"购买","你什么都没买");
        }
        else
        {
        QMessageBox::information(this,"购买","购买成功");
        game::whitePigNum+=temp;
        game::money-=temp*shop::whitePrice;
        emit buyPigSuccess();
        for(int i=0;i<temp;i++)
        {
        whitePig p;
        vw.push_back(p);
        }
        close();
        }
    }
    else
    {
        QMessageBox::information(this,"购买失败","你的钱不够了");
    }
    break;
    }
    case 2:
    {
        int temp=ui->spinBox->value();//购买的猪数量
        if(game::money>temp*shop::blackPrice)//判断钱够不够
        {
            if(temp==0)
            {
                QMessageBox::information(this,"购买","你什么都没买");
            }
            else
            {
            QMessageBox::information(this,"购买","购买成功");
            game::blackPigNum+=temp;
            game::money-=temp*shop::blackPrice;
            emit buyPigSuccess();
            for(int i=0;i<temp;i++)
            {
            blackPig p;
            vb.push_back(p);
            }
            close();
            }
        }
        else
        {
            QMessageBox::information(this,"购买失败","你的钱不够了");
        }
        break;

    }
    case 3:
    {
        int temp=ui->spinBox->value();//购买的猪数量
        if(game::money>temp*shop::HuaPrice)//判断钱够不够
        {
            if(temp==0)
            {
                QMessageBox::information(this,"购买","你什么都没买");
            }
            else
            {
            QMessageBox::information(this,"购买","购买成功");
            game::huaPigNum+=temp;
            game::money-=temp*shop::HuaPrice;
            emit buyPigSuccess();
            for(int i=0;i<temp;i++)
            {
            huaPig p;
            vh.push_back(p);
            }
            close();
            }
        }
        else
        {
            QMessageBox::information(this,"购买失败","你的钱不够了");
        }
break;
    }
    }
    }
    if(foodFlag)
    {
    switch(shop::f)
    {
    case 1:
    {
        int temp=ui->spinBox->value();
        if(game::money>=50)
        {
            QMessageBox::information(this,"购买","购买成功");
            game::money-=temp*50;
            game::cn.num+=temp;
            emit buyPigSuccess();
            close();
        }
        else
        {
            QMessageBox::information(this,"购买失败","你的钱不够了");
        }
        break;
    }
    case 2:
    {
        int temp=ui->spinBox->value();
        if(game::money>=30)
        {
            QMessageBox::information(this,"购买","购买成功");
            game::money-=temp*30;
            game::wt.num+=temp;
            emit buyPigSuccess();
            close();
        }
        else
        {
            QMessageBox::information(this,"购买失败","你的钱不够了");
        }
        break;
    }
    case 3:
    {
        int temp=ui->spinBox->value();
        if(game::money>=20)
        {
            QMessageBox::information(this,"购买","购买成功");
            game::money-=temp*20;
            game::cb.num+=temp;
            emit buyPigSuccess();
            close();
        }
        else
        {
            QMessageBox::information(this,"购买失败","你的钱不够了");
        }
        foodFlag=false;
        break;
    }
    }
    }
}

void buyPig::on_btnCancel_clicked()
{
    close();
}
