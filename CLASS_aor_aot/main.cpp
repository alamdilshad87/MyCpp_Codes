#include <iostream>

using namespace std;
class area
{
private:
    int l=2;
    int b=5;
     int h=5;
    int b1=4;
public:
    int l1=l;
    int b3=b;
    int h1=h;
    int b2=b1;
};




int main()
{
area d;
    int rec;
    int tri;
    rec=d.l1*d.b3;
    cout<<"Area Of Rectangle : "<<rec<<endl;
    tri=(d.h1*d.b2)/2;
    cout<<"Area of Triangle : "<<tri<<endl;
    return 0;
}
