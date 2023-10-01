#include <iostream>

using namespace std;
class example
{
    int a,b;
public:
    example(int x,int y)
    {
        a=x;
        b=y;
        cout<<"constructure begin \n";

    }
    void output()
    {
    int sum=a+b;
    cout<<"a:"<<a<<"\t"<<"b:"<<b<<"\t"<<"sum:"<<sum;
    }
};
int main()
{
    example object(10,20);
    object.output();
        return 0;
}
