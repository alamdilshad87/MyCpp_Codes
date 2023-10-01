#include <iostream>

using namespace std;
class circle
{

    double radius;
public:
    void setradius(double r);
      double getarea();
};
void circle::setradius(double r)
{
    radius=r;
}
double circle::getarea()
{
   double area= 3.14*radius*radius;
}

int main()
{
    float a;
    cout<<"radius=";
    cin>>a;
    circle cl;
    cl.setradius(a);
    cout<<"area="<<cl.getarea();
      return 0;
}
