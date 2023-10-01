#include <iostream>

using namespace std;
class shop
{
    int mrp=100;
    int qty=4;
public:
        int mrp1=mrp;
        int qty1=qty;
        int length =9;
        int breadth=4;
};


int main()
{
    shop sanjeet;
    int area,tc;
    area=sanjeet.length*sanjeet.breadth;
        cout<<"area="<<area<<endl;
    cout<<"length="<<sanjeet.length<<endl;
    cout<<"breadth="<<sanjeet.breadth<<endl;
     tc=sanjeet.mrp1*sanjeet.qty1;
    cout<<"tc="<<tc;

    return 0;
}
