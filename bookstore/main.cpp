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
bookstore book={45,2,15};
bookstore pen={50,3,10};
bookstore dictionary={200,1,50};
cout<<"mrp of item-book:"<<book.mrp<<endl;
cout<<"quantity of item-book:"<<book.dis<<endl;
cout<<"discount of item-book:"<<book.dis<<endl;
np=(book.mrp*book.quantity)-(book.mrp*book.quantity*book.dis/100);
cout<<"net price:"<<np;
cout<<"mrp of item-pen:"<<pen.mrp<<endl;
cout<<"quantity of item-pen:"<<pen.quantity<<endl;
cout<<"discount of item-pen:"<<pen.dis<<endl;
np=(pen.mrp*pen.quantity)-(pen.mrp*pen.quantity*pen.dis/100);
cout<<"net price:"<<np;
cout<<"mrp of dictionary:"<<dictionary.mrp;

return 0;
}
