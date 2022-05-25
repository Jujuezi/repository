#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setFixedSize(1024,768);
    ui->btnNewGame->setFlat(true);
    ui->btnLoad->setFlat(true);
    ui->btnClose->setFlat(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_btnClose_clicked()
{
    close();
}

void MainWindow::on_btnNewGame_clicked()//开始主界面
{
    hide();
    game *gm=new game(this);
    connect(gm,SIGNAL(sendsignal()),this,SLOT(show()));
    gm->show();
}


