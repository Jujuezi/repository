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
    static int PushWhitePigNum;//已放入小猪数量
    static int PushBlackPigNum;
    static int PushHuaPigNum;
    static int whiteii;//放入小猪的数组下标
    static int blackii;
    static int huaii;
    static int emptyWhitePigNum;//还未放入的小猪数量
    static int emptyBlackPigNum;
    static int emptyHuaPigNum;

signals:
    void push();
    void preserveIndex();
private slots:
    void on_btnCancel_clicked();
    void combboxInit();

    void on_btnPush_clicked();
    void updateText();

private:
    Ui::pushType *ui;

};

#endif // PUSHTYPE_H
