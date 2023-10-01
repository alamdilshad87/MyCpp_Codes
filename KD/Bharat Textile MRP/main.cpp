#include <iostream>

using namespace std;

int main()
{
   int Mrp,Quantity,dis;
    cout<<"                            WELCOME IN BHARAT TEXTILE              "<<endl<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"enter mrp:";
    cin>>Mrp;
    cout<<"enter quantity:";
    cin>>Quantity ;
    cout<<"enter discount:";
    cin>>dis;
     cout<<" MRP"<<"          "<<"QUANTITY"<<"            "<<"TOTAL COST "<<"            "<<"net price"<<endl;
     cout<<"  " << Mrp <<"              "<< Quantity<<"                   "<< Mrp*Quantity<<"                   "<<(Mrp*Quantity)-(Mrp*Quantity)*dis/100<<endl;

     return 0;
}


