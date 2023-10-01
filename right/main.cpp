#include <iostream>

using namespace std;

int main()
{
     float number,sum=0.0;
      do
      {
          cout<<"enter a number:";
          cin>>number;
          sum+=number;
      }
      while (number!=0.0);
      cout<<"total sum="<<sum;
      cout<<"total sum="<<sum+sum*10;

    return 0;
}
