#include <iostream>

using namespace std;

int main()
{
    int Mrp,Qty,Dis,NetPrice;
    cout<<"Enter The Value Of MRP : ";
    cin>>Mrp;
    cout<<"Enter The QUANTITY : ";
    cin>>Qty;
    cout<<"Enter The Discount : ";
    cin>>Dis;
    NetPrice = ( Mrp * Qty ) - ( Mrp * Qty * Dis ) / 100 ;
    cout<<" Net Price = "<<NetPrice;
    return 0;
}
