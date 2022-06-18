#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->btnRegister->setFlat(true);
    ui->btnClose->setFlat(true);
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
    model = new QSqlTableModel(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btnRegister_clicked()
{

    QString  name = ui->lineEditName->text();
    QString  pwd = ui->lineEditPswd->text();
    model->setTable("data");
    model->setFilter(tr("name = '%1'").arg(name));
    model->select();
    if(model->rowCount()==0)
    {
    QMessageBox::information(this,"注册成功！","注册成功!");
    QSqlQuery query;
    query.exec(tr("insert into data(name, password) values(%1,%2);").arg(name).arg(pwd));
    }
    else
    {
        QMessageBox::information(this,"注册失败！","已存在账号!");
    }

}

void Dialog::on_btnClose_clicked()
{
    close();
}
