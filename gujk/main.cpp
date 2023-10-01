#include <iostream>

using namespace std;
  void print()
    {
        for(int k=1;k<=60;k++)
            cout<<"-\t";
        cout<<endl;
    }
    void print(int n)
    {
        for(int k=1;k<=n;k++)
            cout<<"*\t";
        cout<<endl;
    }
    void print(int a,int b)
    {
        for(int k=1;k<=b;k++)
            cout<<a*k;
        cout<<endl;
    }
    void print(char t,int n)
    {
        for(int k=1;k<=n;k++)
            cout<<t;
        cout<<endl;
    }


int main()
{
    int u=9;
   int v=4;
    int w=3;
    char c='@';
   print(c,v);
   print(u,w);

    return 0;
}
