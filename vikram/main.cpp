#include <iostream>

using namespace std;

#include<stdlib.h>
class item
{
    int itemcode[50];
    float it_price[50];
 public:
     void initialize();
     float largest();
     float sum();
     void display_item();
     void item_price();
};
void item::initialize()
{
    for(int i=0;i<5;i++)
    {
        cout<<"\n Item no: "<<i+1;
        cout<<"\n Enter item code : ";
        cin>>itemcode[i];
        cout<<" Enter item price : ";
        cin>>it_price[i];
        cout<<"\n";
    }
}
float item::largest()
{
    float large=it_price[0];
    for(int i=0;i<5;i++)
    {
        if(large<it_price[i])
            large=it_price[i];
    }
    return large;
}
float item::sum()
{
    float sum=0;
    for(int i=0;i<5;i++)
        sum+=it_price[i];
    return sum;
}
void item::display_item()
{
    cout<<"\n Code Price\n";
    for(int i=0;i<5;i++)
    {
        cout<<"\n Item code "<<i+1<<itemcode[i];
        cout<<"\n Item price "<<i+1<<it_price[i]<<endl;
    }
    cout<<"\n";
}
void item::item_price()
{
    int code;
    cout<<"\n Enter item code ";
    cin>>code;
    for(int i=0;i<5;i++)
    if(itemcode[i]==code)
    {
        cout<<"\n Item code "<<i+1<<" is "<<itemcode[i];
        cout<<"\n item price "<<i+1<<" is "<<it_price[i]<<endl;
    }
}
int main()
{
    item order;
    order.initialize();
    float total,biggest;
    int ch=0;
    do
    {
        cout<<"\n MAIN MANU ";
        cout<<"\n 1.Display largest price ";
        cout<<"\n 2.Display sum of price ";
        cout<<"\n 3.Display item list ";
        cout<<"\n 4.Display item price ";
        cout<<"\n Enter your choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            biggest=order.largest();
            cout<<"\n The largest price is "<<biggest<<endl;
            break;
        case 2:
            total=order.sum();
            cout<<"\n The sum of price is "<<total<<endl;
            break;
        case 3:
            order.display_item();
            break;
        case 4:
            order.item_price();
            break;
        default:
            cout<<"\n WRONG CHOICE \n";
        }
    }while(ch>=1&&ch<=4);
    return 0;
}


