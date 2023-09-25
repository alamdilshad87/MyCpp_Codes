#include <iostream>

using namespace std;

int main()
{
    int hin,eng,math,p_marks=33;
    cout<<"hindi=";
    cin>>hin;
     cout<<"english=";
    cin>>eng;
     cout<<"math=";
    cin>>math;
    if(hin>=p_marks && eng>=p_marks && math>=p_marks )
        cout<<"pass ";
    else
        cout<<"fail";

    return 0;
}
