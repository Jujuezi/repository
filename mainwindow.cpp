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
    QStringList list = QSqlDatabase::drivers();
    qDebug() << list;

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    if(db.isValid())
    {
        qDebug()<< "ok";
    }
    else
    {
        qDebug()<< "error";
    }
    db.setHostName("127.0.0.1"); // 本地连接
    db.setPort(3306);       // 如果使用的是默认端口可以不设置
    db.setUserName("root");	// 数据库用户名
    db.setPassword("123456"); // 数据库密码
    db.setDatabaseName("qt"); // 数据库名字
    if(db.open())
    {
        qDebug()<< "打开数据库"<< "数据库打开成功, 可以读写数据了......";
    }
    else
    {
        qDebug()<<"数据库打开失败: " << db.lastError().text();
    }
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
    QString  name = ui->lineEditName->text();
    QString  pwd = ui->lineEditPswd->text();
    QSqlTableModel model;
    model.setTable("data");
    model.setFilter(tr("name = '%1' and password = '%2'").arg(name).arg(pwd));
    model.select();
    if(model.rowCount()==1)//查询到有一个结果
    {
    QMessageBox::information(this,"登陆成功！","登陆成功!");
    hide();
    game *gm=new game(this);
    connect(gm,SIGNAL(sendsignal()),this,SLOT(show()));
    gm->show();
    }
    else
    {
        QMessageBox::warning(this, tr("warn"), tr("用户名或者密码不正确"));
        ui->lineEditName->clear();
        ui->lineEditPswd->clear();
        ui->lineEditName->setFocus();
    }
}



void MainWindow::on_btnLoad_clicked()
{
    Dialog *dg=new Dialog(this);
    dg->show();
}
