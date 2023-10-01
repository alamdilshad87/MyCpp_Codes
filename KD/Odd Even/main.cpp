#include <iostream>
int ado(int n);
using namespace std;

int main()
{
   int n;
       cout << "enter a number=";
       cin>>n;
ado(n);
    return 0;
}
int ado(int n)
{

   if(n%2==0)
      {
          cout<<"no is EVEN";
      }
else
    cout<<"no is ODD";

}
