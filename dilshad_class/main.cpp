#include <iostream>

using namespace std;
class shop
{
private:
    int mrp=100;
    int qty=4;
public:
    int mrp1=mrp;
    int qty1=qty;
    int l=4;
    int b=6;

};
int main()
{
    shop d;
    int area;
    int tc;

    area = d.l*d.b;
    cout<<"Area : "<<area<<endl;
    tc=d.mrp1*d.qty1;
    cout<<"Total Cost : "<<tc<<endl;

    return 0;
}
