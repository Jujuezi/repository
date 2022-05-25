#include "pushtype.h"
#include "ui_pushtype.h"
int tempWhite=game::whitePigNum,tempBlack=game::blackPigNum,tempHua=game::huaPigNum;
pushType::pushType(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pushType)
{
    ui->setupUi(this);

}

void pushType::combboxInit()
{
    if(tempWhite!=0||tempBlack!=0||tempHua!=0)
    {
        while(tempWhite!=0)
        {



        }
    }
}

pushType::~pushType()
{
    delete ui;
}

void pushType::on_btnCancel_clicked()
{
    close();
}
