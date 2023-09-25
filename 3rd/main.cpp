#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream filout;
    filout.open("marks.dat",ios::out);
    char ans='y';
    int rollno; float marks;
    while(ans=='y'|| ans=='y')
    {

        cout<<"\n enter rollno.:";
        cin>>rollno;
        cout<<"\n enter marks:";
        cin>>marks;
        filout<<rollno<<'\n'<<marks<<'\n';
        cout<<"\n want to enter more records?(y/n)....";
        cin>>ans;

    }
    filout.close();
    return 0;
}
