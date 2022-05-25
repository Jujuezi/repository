#include "sell.h"
#include "ui_sell.h"

sell::sell(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sell)
{
    ui->setupUi(this);
}

sell::~sell()
{
    delete ui;
}

void sell::on_btnCancel_clicked()
{
    close();
}
