#include <iostream>

using namespace std;

int main()
{
   int value11,r=0;

   do
   {
       cout<<"enter the value : ";
       cin>>value11;
       r+=value11;
   }
   while (value11!=0);

        cout<<"result = "<<r;
        return 0;
}
