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
        cout<<" Roll no : "; cin>>rollno;
        cout<<" Name : "; cin>>name;
        cout<<" Class : "; cin>>clas;
        cout<<" Marks : "; cin>>marks;
        if(marks>=75) grade='A';
        else if(marks>=60) grade='B';
        else if(marks>=50) grade='C';
        else if(marks>=40) grade='D';
        else grade='F';
    }
    void putdata()
    {
        cout<<name<<", Roll no "<<rollno<<"has "<<marks<<"% marks and "<<grade<<" grade."<<endl;
    }
    int getrno()
    {
        return rollno;
    }
}s1;
int main()
{
    int rn; char found='n';
    ifstream fi("stu.txt",ios::in);
    cout<<" Enter rollno to be searched for : ";
    cin>>rn;
    while(!fi.eof())
    {
        fi.read((char*)&s1,sizeof(s1));
        if (s1.getrno()==rn)
        {
            s1.putdata();
            found='y';
            break;
        }
    }
    if(found=='n')
        cout<<" Roll no. not found in file !!!";
    fi.close();
    return 0;
}
