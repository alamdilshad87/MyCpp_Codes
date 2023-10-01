#include <iostream>

using namespace std;
class execution
{
    int a,b;
public:
    execution(int aa,int bb)
    {
        a=aa;
        b=bb;
        cout<<"------------------";
    }
    void result()
    {
        cout<<"sum:"<<a+b;
    }
};
int main()
{
    execution para(10,16);
    para.result();
    return 0;
}
