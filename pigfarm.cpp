#include "pigfarm.h"
#include "ui_pigfarm.h"
int pigFarm::rec=0;
pigFarm::pigFarm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pigFarm)
{
    ui->setupUi(this);

}

pigFarm::~pigFarm()
{
    delete ui;
}



void pigFarm::on_btnPig1_clicked()
{
    rec=1;
    farmText *ft=new farmText(this);
    ft->show();
}

void pigFarm::on_btnPig2_clicked()
{
    rec=2;
}
