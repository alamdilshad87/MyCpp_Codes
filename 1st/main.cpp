#include <iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main()
{
    system("cls");
    ofstream fout("student",ios::out);
    char name[30],ch;
    float marks=0.0;
    for(int i=0;i<5;i++)
    {
        cout<<"student"<<(i+1)<<":\tname:";
        cin.get(name,30);
        cout<<"\t\tmarks:";
        cin >>marks;
        cin.get(ch);
        fout<<name<<'\n'<<marks<<'\n';
    }
    fout.close();
    ifstream fin("student",ios::in);
    fin.seekg(0);
    cout<<"\n";
    for(int i=0;i<5;i++)
    {

    fin.get(name,30);
    fin.get(ch);
    fin>>marks;
    fin.get(ch);
    cout<<"student name:"<<name;
    cout<<"\tmarks:"<<marks<<"\n";
    }
    fin.close();
    return 0;
}
