#include <iostream>

using namespace std;

int l,b,s,d;
int por()
{
    return 2*(l+b) ;
}
int aor()
{
    return l*b;
}
int pos()
{
    return 4*s;
}

int main()
{
    int d,a1,a2,a3,a4;
    a1=por();
    a2=aor();
    a3=pos();
    cout<<"Enter Your Choice : ";
    cin>>d;
 cout<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    if(d==1)
    {
        cout<<"Enter The Length : ";
        cin>>l;
        cout<<"Enter The Breadth : ";
        cin>>b;
        a1=por();
        cout<<"The Perimeter Of Rectangle Is : "<<a1<<endl;
    }
    else
    {
        switch(d==2)
        {
            cout<<"Area Of Rectangle "<<endl;
            cout<<"Perimeter Of Side ";
        case 1 :
            {
        cout<<"Enter The Length : ";
        cin>>l;
        cout<<"Enter The Breadth : ";
        cin>>b;
        cout<<"Enter The Side : ";
        cin>>s;
        a1=por();
        a2=aor();
        a3=pos();
        cout<<"The Perimeter Of Rectangle Is : "<<a1<<endl;
        cout<<"The Area Of Rectangle Is : "<<a2<<endl;
        cout<<"The Perimeter Of Square Is : "<<a3<<endl;
            }

    }
        }

    return 0;
}
