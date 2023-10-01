#include <iostream>

using namespace std;



    int a,b;
    int Add()
    {
        return a+b;
    }
    int Mult()
    {
        return a*b;
    }
    int main()
    {
        float Answer ,Answer1;
        cout<<"1st Number : " ;
        cin>>a;
        cout<<"2nd Number : " ;
        cin>>b;
        Answer = Add();
        Answer1 = Mult();
        cout<<" A = "<<a<<endl;
        cout<<" B = "<<b<<endl;

        return 0;
    }
