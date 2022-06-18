#include "pigfarm.h"
#include "ui_pigfarm.h"
int pigFarm::rec=0;//猪栏编号

pigFarm::pigFarm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pigFarm)
{
    ui->setupUi(this);
    farmText *ft=new farmText(this);
    connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
    ui->btnPig1->setFlat(true);
    ui->btnPig2->setFlat(true);
    ui->btnPig3->setFlat(true);
    ui->btnPig4->setFlat(true);
    ui->btnPig5->setFlat(true);
    ui->btnPig6->setFlat(true);
}

pigFarm::~pigFarm()
{
    delete ui;
}


void pigFarm::on_btnPig1_clicked()
{
    switch(game::numrec)
    {
    case 1:
    {
        rec=1;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p1[rec-1].exist())
        {
            pigfarmclass p;
            game::bpf.p1[rec-1]=p;
        }
        break;
    }
    case 2:
    {
        rec=1;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p2[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p2[rec-1]=p;
        }
        break;
    }
    case 3:
    {
        rec=1;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p3[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p3[rec-1]=p;
        }
        break;
    }
    case 4:
    {
        rec=1;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p4[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p4[rec-1]=p;
        }
        break;
    }
    case 5:
    {
        rec=1;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p5[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p5[rec-1]=p;
        }
        break;
    }
    case 6:
    {
        rec=1;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p6[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p6[rec-1]=p;
        }
        break;
    }
    }
}

void pigFarm::on_btnPig2_clicked()
{
    switch(game::numrec)
    {
    case 1:
    {
        rec=2;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p1[rec-1].exist())
        {
            pigfarmclass p;
            game::bpf.p1[rec-1]=p;
        }
        break;
    }
    case 2:
    {
        rec=2;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p2[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p2[rec-1]=p;
        }
        break;
    }
    case 3:
    {
        rec=2;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p3[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p3[rec-1]=p;
        }
        break;
    }
    case 4:
    {
        rec=2;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p4[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p4[rec-1]=p;
        }
        break;
    }
    case 5:
    {
        rec=2;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p5[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p5[rec-1]=p;
        }
        break;
    }
    case 6:
    {
        rec=2;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p6[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p6[rec-1]=p;
        }
        break;
    }
    }
}


void pigFarm::on_btnPig3_clicked()
{
    switch(game::numrec)
    {
    case 1:
    {
        rec=3;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p1[rec-1].exist())
        {
            pigfarmclass p;
            game::bpf.p1[rec-1]=p;
        }
        break;
    }
    case 2:
    {
        rec=3;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p2[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p2[rec-1]=p;
        }
        break;
    }
    case 3:
    {
        rec=3;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p3[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p3[rec-1]=p;
        }
        break;
    }
    case 4:
    {
        rec=3;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p4[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p4[rec-1]=p;
        }
        break;
    }
    case 5:
    {
        rec=3;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p5[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p5[rec-1]=p;
        }
        break;
    }
    case 6:
    {
        rec=3;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p6[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p6[rec-1]=p;
        }
        break;
    }
    }
}

void pigFarm::on_btnPig4_clicked()
{
    switch(game::numrec)
    {
    case 1:
    {
        rec=4;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p1[rec-1].exist())
        {
            pigfarmclass p;
            game::bpf.p1[rec-1]=p;
        }
        break;
    }
    case 2:
    {
        rec=4;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p2[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p2[rec-1]=p;
        }
        break;
    }
    case 3:
    {
        rec=4;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p3[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p3[rec-1]=p;
        }
        break;
    }
    case 4:
    {
        rec=4;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p4[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p4[rec-1]=p;
        }
        break;
    }
    case 5:
    {
        rec=4;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p5[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p5[rec-1]=p;
        }
        break;
    }
    case 6:
    {
        rec=4;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p6[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p6[rec-1]=p;
        }
        break;
    }
    }
}

void pigFarm::on_btnPig5_clicked()
{
    switch(game::numrec)
    {
    case 1:
    {
        rec=5;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p1[rec-1].exist())
        {
            pigfarmclass p;
            game::bpf.p1[rec-1]=p;
        }
        break;
    }
    case 2:
    {
        rec=5;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p2[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p2[rec-1]=p;
        }
        break;
    }
    case 3:
    {
        rec=5;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p3[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p3[rec-1]=p;
        }
        break;
    }
    case 4:
    {
        rec=5;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p4[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p4[rec-1]=p;
        }
        break;
    }
    case 5:
    {
        rec=5;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p5[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p5[rec-1]=p;
        }
        break;
    }
    case 6:
    {
        rec=5;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p6[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p6[rec-1]=p;
        }
        break;
    }
    }
}

void pigFarm::on_btnPig6_clicked()
{
    switch(game::numrec)
    {
    case 1:
    {
        rec=6;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p1[rec-1].exist())
        {
            pigfarmclass p;
            game::bpf.p1[rec-1]=p;
        }
        break;
    }
    case 2:
    {
        rec=6;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p2[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p2[rec-1]=p;
        }
        break;
    }
    case 3:
    {
        rec=6;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p3[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p3[rec-1]=p;
        }
        break;
    }
    case 4:
    {
        rec=6;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p4[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p4[rec-1]=p;
        }
        break;
    }
    case 5:
    {
        rec=6;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p5[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p5[rec-1]=p;
        }
        break;
    }
    case 6:
    {
        rec=6;
        farmText *ft=new farmText(this);
        connect(ft,&farmText::updatePig,this,&pigFarm::updatePig);
        ft->show();
        if(!game::bpf.p6[rec-1].exist())
        {
        pigfarmclass p;
        game::bpf.p6[rec-1]=p;
        }
        break;
    }
    }
}
