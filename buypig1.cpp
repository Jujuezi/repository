#include "buypig1.h"
#include "ui_buypig.h"

buyPig::buyPig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::buyPig)
{
    ui->setupUi(this);
}

buyPig::~buyPig()
{
    delete ui;
}






