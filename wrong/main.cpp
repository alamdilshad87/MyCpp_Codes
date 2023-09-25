#include <iostream>

using namespace std;
int sish(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
int sonu(int x,int y)
{
    int c;
    c=x-y;
    return c;
}
int ram(int x, int y)
{
    int d;
    d=x*y;
    return d;
};

int main()
{
    int result1,result2,result3;
    result1=sish(15,6);
    result2=sonu(15,10);
    result3=ram(15,10);
    cout<<"sish="<<result1<<endl;
    cout<<"sonu="<<result2<<endl;
    cout<<"ram="<<result3<<endl;

    return 0;
}
