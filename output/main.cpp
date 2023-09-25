#include <iostream>

using namespace std;
struct dist
{
    int feet;
    float inch;
};

int main()
{
    dist d={25,13.4};
    cout<<"feet="<<d.feet;
    cout<<"inch="<<d.inch;
    return 0;
}
