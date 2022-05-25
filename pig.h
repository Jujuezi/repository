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
};
class whitePig:public pig
{
public:
    whitePig();
    ~whitePig()=default;
    void weightAdd(){weight+=5;}

};
#endif // PIG_H
