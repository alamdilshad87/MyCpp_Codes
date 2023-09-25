#include <iostream>

using namespace std;

int main()
{
    float number,choice,sum=0.0,sub=0.0;
    cout<<"choose any number=";
    cin>>choice;
    if(choice==1)
    {
        do
    {
        cout<<"enter any number=";
        cin>>number;
        sum+=number;
    }
    while (number!=0.0);
    cout<<"total sum="<<sum;
    }
       if(choice==2)
            {
        do
    {
        cout<<"enter any number=";
        cin>>number;
        sub-=number;
    }
    while (number!=0.0);
    cout<<"result="<<sub;
    }

    return 0;
}
