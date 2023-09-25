#include <iostream>

using namespace std;
int sum(int num1,int num2);
int sum(int num1,int num2,int num3);
int sum(int num1,int num2,int num3,int num4);
int main()
{
    int a=300;
    int b=200;
    int c=400;
    int d=800;
    int result,result2,result3;
    result=sum(a,b);
    result2=sum(a,b,c);
     result3=sum(a,b,c,d);
    cout<<"a:"<<a<<endl;
     cout<<"b:"<<b<<endl;
      cout<<"c:"<<c<<endl;
       cout<<"d:"<<d<<endl;
       cout<<"sum value is :"<<result<<endl;
       cout<<"sum value is :"<<result2<<endl;
       cout<<"sum value is :"<<result3<<endl;
       return 0;
}
int sum(int num1,int num2)
{
    int result1;
    result1=num1+num2;
    return result1;
}
int sum(int num1,int num2,int num3)
{
    int result4;
    result4=num1+num2+num3;
    return result4;
}
int sum(int num1,int num2,int num3,int num4)
{
    int result5;
    result5=num1+num2+num3+num4;
    return result5;
}

