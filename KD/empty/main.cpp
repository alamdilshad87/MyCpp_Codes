#include <iostream>

using namespace std;
int raj();
int div();
int main()
{
   cout<<"menu"<<endl;
   cout<<"press 1 for addition and 2 for division.:"<<endl;
   int n;
   cout<<"enter your choice:";
   cin>>n;
   if(n==1)
    raj();
   if(n==2)
    div();
    return 0;
}
int raj()
{

int a,b,c;
    cout<<"enter first number for checking:";
    cin>>a;
    if(a%6==0&&a%9==0)
    {
        cout<<"this number is purely divisible by 6and9.";
    }
    else
    {
        cout<<"this not divisible by 6 and 9 both.";
    }

}
int div()
{
    int a,b,c;
    cout<<"enter first numbers for checking:";
    cin>>a;
    if(a%4==0&&a%5==0)
    {
        cout<<"this no. is divisible by both 4 and 5.";
    }
    else
    {
        cout<<"this no. is not divisible by both 4 and 5.";
    }
}
