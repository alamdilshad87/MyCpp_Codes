#include <iostream>
#include<stdio.h>
const int len=20
using namespace std;
class employee
{
public:
    char name[len];

    void name()
    {
    cout<<"enter name of the employee:";
    }
    void add()
    {
        cout<<"enter address of the employee:";

    }
};
class employee1:public employee
{
public:
    void name()
    {
    cout<<"enter name of the employee:";
    }
    void add()
    {
        cout<<"enter address of the employee:";
    }
};

int main()
{
    employee ob1;
    ob1.add();
    return 0;
}
