#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream work("deep.txt");
    int a,b,c;
    if(work.is_open())
    {
        work>>a;
        work>>b;
        work>>c;
        cout<<"sum="<<a+b+c<<endl;
    }
    else{


        cout<<"file not found:";
    }
    work.close();
    return 0;
}
