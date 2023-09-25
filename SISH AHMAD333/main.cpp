#include <iostream>
#include <fstream>

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
        cout<<"rollno:";
        cin>>rollno;
        cout<<"name:";
        cin>>name;
        cout<<"class:";
        cin>>clas;
        cout<<"marks:";
        cin>>marks;
        if (marks>=75)
            grade='a';
        else if(marks>=60)
            grade='b';
            else if(marks>=50)
            grade='c';
            else if(marks>=40)
            grade='d';
        else grade='f';
    }
    void putdata()
    {
        cout<<name<<"rollno"<<rollno<<"has"<<marks<<"%marks and"<<grade<<"grade."<<endl;
    }
    int getrno()
    {
        return rollno;
    }
}s1;
int main()
{
    int rn;
    char found='n';
    ifstream fi("stu.dat",ios::in);
    cout<<"enter roll nno to be searched for:";
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
        cout<<"rollno not found in file!!"<<endl;
    fi.close();

    return 0;
}
