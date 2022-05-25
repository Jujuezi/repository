#ifndef PUSHTYPE_H
#define PUSHTYPE_H

#include <QDialog>
#include"game.h"
namespace Ui {
class pushType;
}

class pushType : public QDialog
{
    Q_OBJECT

public:
    explicit pushType(QWidget *parent = 0);
    ~pushType();

private slots:
    void on_btnCancel_clicked();
    void combboxInit();

private:
    Ui::pushType *ui;
    int tempWhite,tempBlack,tempHua;
    int combNum=0;
};

#endif // PUSHTYPE_H
