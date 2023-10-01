#include <iostream>

using namespace std;
class example
{
private:
    int a,b;
public:
    example()
    {
        a=10;b=20;
        cout<<"constructure begins \n";
    }
    void output()
    {
        cout<<"values:"<<a<<"\t"<<"values:"<<b;
    }

};
int main()
{
    example object;
    object.output();

    return 0;
}
