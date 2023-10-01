#include <iostream>

using namespace std;

int main()
{
    int A,B,C,Maxi;
    cout<<"First Number : ";
    cin>>A;
    cout<<"Second Number : ";
    cin>>B;
    cout<<"Third Number : ";
    cin>>C;
    Maxi=A;
    if(B>Maxi)
    {
        Maxi=B;
    }
    if(C>Maxi)
    {
        Maxi=C;
    }
    cout<<"Maximum Number = "<<Maxi<<endl;

    return 0;
}
