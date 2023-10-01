#include <iostream>

using namespace std;

int main()
{
    int A,B,C,D,MINI;
    cout<<"1st Number : ";
    cin>>A;
    cout<<endl;
    cout<<"2nd Number : ";
    cin>>B;
    cout<<endl;
    cout<<"3st Number : ";
    cin>>C;
    cout<<endl;
    cout<<"4nd Number : ";
    cin>>D;
    cout<<endl;
    MINI=A;
    if(B<MINI)
    {
        MINI=B;
    }
    if(C<MINI)
    {
        MINI=C;
    }
    if(D<MINI)
    {
        MINI=D;
    }
    cout<<"Minimum Number : "<<MINI<<endl;

    return 0;
}
