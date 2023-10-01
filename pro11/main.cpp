#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream filout;
    filout.open("marks.dat",ios::out);
    char name[15];
    int sub,sub1,sub2,sub3,sub4;
     float total;

        cout<<"\n enter name of students:";
        cin>>name;
        cout<<"\n enter sub ";
        cin>>sub;
    cout<<"\n enter sub1 ";
        cin>>sub1;
        cout<<"\n enter sub2 ";
        cin>>sub2;
        cout<<"\n enter sub3 ";
        cin>>sub3;
        cout<<"\n enter sub4 ";
        cin>>sub4;
        total=sub+sub1+sub2+sub3+sub4;
        filout<<"\n total marks of the student "<<total;
    filout.close();
    return 0;
}

