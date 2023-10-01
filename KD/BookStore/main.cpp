#include <iostream>

using namespace std;
struct bookstore
{
    int mrp;
    int quantity;
    int dis;

};
int main()
{
 int np;
 bookstore rahul = {45,2,15};
 bookstore bikash = {50,3,10};
cout<<"mrp of item-rahul : "<<rahul.mrp<<endl<<endl;
cout<<"quantity of item-rahul : "<<rahul.quantity<<endl<<endl;
cout<<"discount of item-rahul  "<<rahul.dis<<endl<<endl;
np=(rahul.mrp*rahul.quantity)-(rahul.mrp*rahul.quantity)*rahul.dis/100;
cout<<"net price : "<<np<<endl<<endl;
cout<<"mrp of item-bikash       "<<bikash.mrp<<endl<<endl;
cout<<"quantity of item-bikash  "<<bikash.quantity<<endl<<endl;
cout<<"discount of item-bikash  "<<bikash.dis<<endl<<endl;
np=(bikash.mrp*bikash.quantity)-(bikash.mrp*bikash.quantity)*bikash.dis/100;
cout<<"net price:"<<np;
}
