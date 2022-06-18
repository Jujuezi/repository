#ifndef PIG_H
#define PIG_H
#include<iostream>
#include<QString>
using namespace std;
class pig
{
public:
    pig();
    QString name;
    int weight;
    int id=0;
    int starvation;
    int pushRec=0;
    int NumRecPos;
    int RecPos;
    int combPos;
    void feedFd(int i);
    void slim();
    virtual void growUp()=0;
};

class whitePig:public pig
{
public:
    whitePig();
    void growUp();

};

class blackPig:public pig
{
public:
    blackPig();
    void growUp();
};

class huaPig:public pig
{
public:
    huaPig();
    void growUp();
};

class pigfarmclass
{
public:
    pigfarmclass();
    QString pigName1;
    QString weight1;
    bool ifsell1;
    QString pigName2;
    QString weight2;
    bool ifsell2;
    int havePigNum;
    int comb1rec;//猪栏放的猪类型 标记
    int comb2rec;
    bool exist();

};
class bigpigfarmclass
{
public:
    pigfarmclass p1[6];
    pigfarmclass p2[6];
    pigfarmclass p3[6];
    pigfarmclass p4[6];
    pigfarmclass p5[6];
    pigfarmclass p6[6];
};

#endif // PIG_H
