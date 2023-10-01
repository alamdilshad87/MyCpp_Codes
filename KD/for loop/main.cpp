#include <iostream>

using namespace std;

int main()
{
    int add =0;
    int num,num1,num2,netprice;
    int numtimes;

    cout<<"Enter Number Of PRODUCT : ";
    cin>>numtimes;
    cout<<endl;

    for (int n=0;n<numtimes;n++)
    {
        cout<<"Mrp = ";
        cin>>num;
        cout<<"Quantity : ";
        cin>>num1;
        cout<<"Discount : ";
        cin>>num2;
        cout<<endl;
        netprice =(num*num1)-(num*num1*num2)/100;
        cout<<"Net price = "<<netprice<<endl;

    }
    cout<<" The Total Amount Is = "<<netprice<<endl;

    return 0;
}
