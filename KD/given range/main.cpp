#include <iostream>

using namespace std;

int main()
{
    int i,n,a;

    cout << "enter a positive integer:" << endl;
    cin>>n;
    cout<<"enter range:"<<endl;
    cin>>a;
    for(i=1;i<=a;++i)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}
