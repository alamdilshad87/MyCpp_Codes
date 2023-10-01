#include <iostream>

using namespace std;

int main()
{
    int x,y,Angle ;
    cout<<"                   Here's A Programme To Find An ANGLE "<<endl<<endl;

    cout<<"It's A TRIANGLE "<<endl;
    cout<<"Two Angles Are Known And One To Find "<<endl<<endl;

    cout<<"Enter The Angle Of X = " ;
    cin>>x;
    cout<<"Enter The Angle Of Y = " ;
    cin>>y;
    cout<<"Angle Of Z = ? "<<endl<<endl;

    cout<<"The Sum Of Three Angles = 180 "<<endl<<endl;
    Angle = 180-(x+y);

    cout<<"Angle Z = "<<Angle<<endl<<endl<<endl<<endl<<endl;
    return 0;
}
