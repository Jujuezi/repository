#include "buypig.h"
#include "ui_buypig.h"

int buyPig::i=0;
whitePig buyPig::wArr[whiteN];

buyPig::buyPig(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buyPig)
{
    ui->setupUi(this);

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
        whitePig p;
        wArr[i]=p;
        i++;
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

void buyPig::on_btnCancel_clicked()
{
    close();
}
