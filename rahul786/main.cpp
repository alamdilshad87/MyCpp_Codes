#include <iostream>

using namespace std;
class xyz
{

private:
    int a,k,m;
    int sqr(int a)
    {
        return a*a;
    }
    int rec(int a,int m)
    {
        return a*m;
    }
public:
    int b;
    int c=a;
    int aor(int a)
    {
        return a*a;
    }
    int twice(int i)
    {
        return 2*i;
    }
    int half(int i)
    {
        return i/2;
    }
    int tsq(int i)
    {
        int p=sqr(i);
        int q=twice(p);
        int a=i;
        return a+i;

    }
    };
    xyz ob1;
int main()
{
ob1.b=5;
ob1.c=2;
ob1.twice(10);
ob1.aor(4);
//ob1.sqr(6);
ob1.tsq(10);
ob1.twice(5);
ob1.half(8);
cout<<"twice="<<ob1.twice(10);
cout<<"aor="<<ob1.aor(8);
cout<<"tsq="<<ob1.tsq(6);
cout<<"half="<<ob1.half(8);

    return 0;
}
