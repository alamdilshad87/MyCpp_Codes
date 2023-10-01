#include <iostream>

using namespace std;
class area

{
    public:
 void rect()
 {
  cout<<"area of rectangle:";
 }
 void circle()
 {
     cout<<"area of circle:";
 }
};
class area1:area
{


public:
    void rect()
    {
        cout<<"arae of rectangle:";
    }
    void circle()
    {
        cout<<"area of circle:";
    }
};
int main()
{
    area ob1;
    ob1.rect();
    return 0;
}
