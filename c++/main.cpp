#include <iostream>
#include<fstream>

using namespace std;

class stu
{
    int rollno;
    char name[25];
    char clas[4];
    float marks;
    char grade;
public:
    void getdata()
    {
        cout<<" Roll no : ";
        cin>>rollno;
        cout<<" Name : ";
        cin>>name;
        cout<<" Class : ";
        cin>>clas;
        cout<<" Marks : ";
        cin>>marks;
        if(marks>=75) grade='A';
        else if(marks>=60) grade='B';
        else if(marks>=50) grade='C';
        else if(marks>=40) grade='D';
        else grade='F';
    }
    void putdata()
    {
        cout<<" Name "<<name<<", Roll no " <<rollno<<", has "<<marks<<"% marks and "<<grade<<" grade."<<endl;
    }
    int getrno()

    {
        return rollno;
    }
}s1;
int main()
{

    ofstream fo("stu.dat",ios::app|ios::binary);
    char ans='y';
    while(ans=='y')
    {
        s1.getdata();
        fo.write((char*)&s1,sizeof(s1));
        cout<<" Record added to file.\n";
        cout<<" Want to enter more recoard?(y/n)";
        cin>>ans;
    }
    fo.close();
    return 0;
}
