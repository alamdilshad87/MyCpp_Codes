#include <iostream>

using namespace std;

int main()
{
    enum day{Jan,feb,Mar,Apr,May,Jun,Jul,aug,sep,ouc,nov,dec};
    int a;
    cout<<"\n0)Jan";
    cout<<"\n1)Feb";
    cout<<"\n2)Mar";
    cout<<"\n3)Apr";
    cout<<"\n4)May";
    cout<<"\n5)Jun";
    cout<<"\n6)Jul";
    cout<<"\n7)Aug";
    cout<<"\n8)Sep";
    cout<<"\n9)Oct";
    cout<<"\n10)Nov";
    cout<<"\n11)Dec";mn n mn
    cout<<"\nEnter the Month no.= ";
    cin>>a;
    if(a==5 || a==6)
    {
        cout<<"\n\nWeekends !!!!!!!!";
    }
    else
        cout<<"\n\nWeekdays!!!!!!!!!!!";
    return 0;
}
