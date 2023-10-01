#include <iostream>

using namespace std;

int main()
{
int n;
cout<<"Enter A Number : " ;
cin>>n;
cout<<"--------------------------------------------------------------------------------"<<endl;
if (n%2==0)
{
    int Mrp,Quantity,TC;
    cout<<"                            WELCOME IN BHARAT TEXTILE              "<<endl<<endl;

    cout<<" MRP          QUANTITY             TOTAL COST "<<endl;
    cin>>Mrp;

    cin>>Quantity ;

    TC=Mrp*Quantity;
    cout<<TC;
}
else
{
    int Mrp,Quantity,TC;
    cout<<"                            WELCOME IN ARCHANA TEXTILE             "<<endl<<endl;

    cout<<" MRP          QUANTITY             TOTAL COST "<<endl;
    cin>>Mrp;

    cin>>Quantity ;

    TC=Mrp*Quantity;
    cout<<TC;
}
     return 0;
}
