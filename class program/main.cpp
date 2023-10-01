#include <iostream>
class container {
public:
    double length;
     double breadth;
      double height;
};

using namespace std;

int main()
{
    container container1;
    container container2;
    double volume=0.0;
    container1.height=5.0;
    container1.length=6.0;
    container1.breadth=7.0;
    container2.height=10.0;
    container2.length=12.0;
    container2.breadth=13.0;
    volume=container1.height*container1.length*container1.breadth;
    cout<<"height of container1:"<<container1.height<<endl;
    cout<<"breadth of container1:"<<container1.breadth<<endl;
    cout<<"volume of container1:"<<volume<<endl;
    volume=container2.height*container2.length*container2.breadth;
    cout<<"height of container2:"<<container2.height<<endl;

    cout<<"length of container2:"<<container2.length<<endl;
    cout<<"breadth of container2:"<<container2.breadth<<endl;
    cout<<"volume of container2:"<<volume<<endl;

    return 0;
}
