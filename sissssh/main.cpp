#include <iostream>
#include <conio.h>

using namespace std;
class shop
{
private:
    float mrp=500.8;
    int quantity=4;
    void read()
    {
        mrp;
        quantity;
    }
public:
    void display()
    {
        read();
        cout<<"\nmrp="<<mrp;
        cout<<"\nquantity="<<quantity;

    }
};

int main()
{
    shop baazar;
    baazar.display();

    return 0;
}
