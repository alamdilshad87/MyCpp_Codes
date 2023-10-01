#include <iostream>
#include <stdlib.h>
using namespace std;
void change();
int main()
{
    void change (int);
    int orig=1-0;
    cout<<"the original value is:"<<orig<<endl;
    change (orig);
    cout<<"value after changing is:"<<orig<<endl;
    return 0;
}

void change (int orig)
{
cout<<"value of orig in function is:"<<orig<<endl;
return ;
}
