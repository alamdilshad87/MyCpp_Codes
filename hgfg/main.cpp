#include <iostream>

using namespace std;
class abc
{
private :
    int a, b,c;
public :


    int d=a;
    int e=b;
    int g()

    {


    return d*e;

    }
};
class def
{
private :
    int d, e,f;
public :


    int g=d;
    int h=e;
    int i()

    {


    return g/h;

    }
};

int main()
{
    abc f;
    def cd;
    cout<<"l : ";
    cin>>f.d;
    cout<<"b :";
    cin>>f.e;
    cout<<"ans:"<<f.g();

    cout<<"l : ";
    cin>>f.d;
    cout<<"b :";
    cin>>f.e;
    cout<<"ans:"<<f.g();

         return 0;
}
