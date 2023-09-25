#include <iostream>

using namespace std;
class sample
{
    int a,b;
public:
    sample()
    {
       a=10;
       b=20;
      cout<<"begins.";
    }
    void output()
    {
        cout<<"values are:"<<a<<"\t"<<b;
    }

};
int main()
{
    sample object;
    object.output();
    return 0;
}
