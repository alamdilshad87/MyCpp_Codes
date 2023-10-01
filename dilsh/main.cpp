#include <iostream>

using namespace std;

int aor(int l,int b)
{
    int a;
    a=l*b;
    return a;
}
int aot(int b,int h)
{

    int ab;
    ab=(b*h)/2;
    return ab;
}

int main()
{

    int c,ca;
    c=aor(20,4);
    ca=aot(20,4);
    cout<<"AOR : "<<c<<endl;
    cout<<"AOT : "<<ca<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
