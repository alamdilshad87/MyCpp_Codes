#include <iostream>

using namespace std;
class aor
{
private :
    int l,b;
public :
    void aor_area(int l1,int b1);
    int aor_a();
};
    void aor ::aor_area(int l1,int b1)
    {
        l=l1;
        b=b1;
    }
    int aor :: aor_a()
        return l*b;


int main()
{
   int z,x;
    aor ans1;
cout<<"l =";
cin>>z;
cout<<"b =";
cin>>x;
    cout << "Area of rec" <<ans1.aor_a()<< endl;
    return 0;
}
