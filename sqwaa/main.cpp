#include <iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main()
{
    system("cls");
    ofstream filout;
    filout.open("stunames",ios::out);
    filout<<"devyani \n"<<"monica patrick\n"<<"neli banerjee \n";
    filout.close();
    filout.open("stumarks",ios::out);
    filout<<"78.92\n"<<"72.17\n"<<"69.33\n";
    filout.close();
    char line[80];
    ifstream filin;
    filin.open("stunames",ios::in);
    cout<<"the contents of stunames file are given below \n";
    filin.getline(line,80);
    cout<<line<<"\n";
    filin.getline(line,80);
    cout<<line<<"\n";
    filin.getline(line,80);
    cout<<line<<"\n";
    filin.close();
    filin.open("stumarks",ios::in);
    cout<<"\nthe contents of stumarks file are given below \n";
    filin.getline(line,80);
    cout<<line<<"\n";
    filin.getline(line,80);
    cout<<line<<"\n";

    return 0;
}
