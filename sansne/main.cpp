#include <iostream>

using namespace std;
class universal
{
public:
    class student1
    {
    private:
        int s,t;
    public:
        void sum(int a,int b)
        {
            s=a+b;
        }
        void mult(int a,int b)
        {
            t=a*b;
        }
        void show()
        {
            cout<<"\n sum of a and b is ::"<<s;
        }
        void show1()
        {
            cout<<"\n product of a and b is ::"<<t;
        }
    };
};
int main()
{
    universal::student1 x;
    x.sum(19,10);
    x.mult(8,7);

    x.show();
    cout<<"\n";
    cout<<"============================";
    x.show1();

    return 0;
}
