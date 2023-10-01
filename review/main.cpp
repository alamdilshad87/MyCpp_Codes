#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{
    system ("cls");
    ifstream filin1,filin2;
        filin1.open("stunames",ios::in);
        filin2.open("stumarks",ios::in);
        char line[80];
        cout<<"the contents of stunames and stumarks are given below.\n";
        filin1.getline(line,80);
        cout<<line<<"\n";
        filin2.getline(line,80);
        cout<<line<<"\n";
        filin1.getline(line,80);
        cout<<line<<"\n";
        filin2.getline(line,80);
        cout<<line<<"\n";
        filin1.getline(line,80);
        cout<<line<<"\n";
        filin2.getline(line,80);
        cout<<line<<"\n";
        filin1.close();
        filin2.close();
    return 0;
}
