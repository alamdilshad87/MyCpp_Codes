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
        cout<<"\n constructure begins";
    }
    void display()
    {
        cout<<"values:"<<a<<"\t"<<b;
    }
};

int main()
{
    example object(10,20);
    example object2=object;
    object.display();
    object2.display();
    return 0;
}
