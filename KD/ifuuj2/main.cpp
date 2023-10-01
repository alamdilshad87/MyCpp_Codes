#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"1 For Add "<<endl;
    cout<<"2 For Subtract"<<endl;
    cout<<"3 For Multiply"<<endl;

    cout<<"Enter Your Choice : ";
    cin>>a;
    cout<<endl;

    if(a==1)
    {
       int b,c,d ;
       cout<<"Enter A Number : ";
       cin>>b;
       cout<<"Enter A Number : ";
       cin>>c;
       cout<<endl;

       d=b+c;
       cout<<"Answer = "<<d<<endl;
    }
    if(a==2)
    {
       int b,c,d ;
       cout<<"Enter A Number : ";
       cin>>b;
       cout<<"Enter A Number : ";
       cin>>c;
       cout<<endl;

       d=b-c;
       cout<<"Answer = "<<d<<endl;
    }
    if(a==3)
    {
       int b,c,d ;
       cout<<"Enter A Number : ";
       cin>>b;
       cout<<"Enter A Number : ";
       cin>>c;
       cout<<endl;

       d=b*c;
       cout<<"Answer = "<<d<<endl;
    }
    return 0;
}
