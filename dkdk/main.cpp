#include <iostream>

using namespace std;
int sum(int a,int b=5,int c=20)
{

    int r;
    r=a+b;
    int r1=r+c;
    return r1;
}
int main()
{
    cout<<sum(12,4,50)<<endl;
    cout<<sum(4)<<endl;
    return 0;
}
