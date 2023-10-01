#include <iostream>

using namespace std;
class universal
{
public:
    class student
    {
 private:
    int s,t;
 public:
    void sum(int a,int b)

    {
        s=a+b;
    }
    void multi(int a,int b)
    {
     t=a*b;

    }
     void show()
     {
         cout<<"sum of a and b::"<<s<<endl;
     }
     void show1()
     {
         cout<<"product of a and b::"<<t<<endl;
     }
    };
};
int main()
{
    universal ::student x;
    x.sum(10,18);
    x.multi(8,7);

    x.show();
    x.show1();
    return 0;
}
