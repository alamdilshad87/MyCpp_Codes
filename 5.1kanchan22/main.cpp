#include <iostream>

using namespace std;
class simple
{
    int a,b;
public:
    simple(int x,int y)
    {
        a=x;
        b=y;
        cout<<"constructure begins.";
    }
    void display()
    {
        cout<<"values:"<<a<<"\t"<<b;
    }
};
int main()
{
    simple object(10,20);
    simple object2=object;
    object.display();
    object2.display();
    return 0;
}
