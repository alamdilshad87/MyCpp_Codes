#include <iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

class student
{
    char name[40];
    char grade;
    int marks;
public:
    void getdata(void);
    void display(void);
};
void student::getdata(void)
{
    cout<<" Enter name : ";
    cin.getline(name,40);
    cout<<" Enter grade : ";
    cin>>grade;
    cout<<" Enter marks : ";
    cin>>marks;
    cout<<"\n";
}
void student::display(void)
{
    cout<<" Name : "<<name<<"\t"<<"Grade : "<<grade<<"\t"<<"Marks : "<<marks<<"\t"<<"\n";
}

int main()
{
    student arts[3];
    fstream filin;
    filin.open("stu.txt",ios::in|ios::out);
    if(!filin)
    {
        cout<<" Can not open file !!\n";
        return 1;
    }
    cout<<" Enter details for 3 dtudent \n ";
    for(int i=0;i<3;i++)
    {
        arts[i].getdata();
        filin.write((char*)&arts[i],sizeof(arts[i]));
    }
    filin.seekg(0);
    cout<<" The contents of stu.dat are shown below.\n";
    for(int i=0;i<3;i++)
    {
        filin.read((char*)&arts[i],sizeof(arts[i]));
        arts[i].display();
    }
    filin.close();
    return 0;
}
