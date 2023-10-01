#include <iostream>

using namespace std;
class head
{
public:
    class np
    {
    private:
         int net1;
    public:
        void net(int m,int q,int d)
        {
            net1=(m*q)-(m*q*d/100);
        }
        void ans()
        {
            cout<<"net price :"<<net1<<"\n";
        }
    };
};
 class head2
     {

            public:
                class si
                {
             private :
                int si1;
             public:

                void si2(int p,int r,int t)
                {
                    si1=(p*r*t)/100;
                }
                void ans2()
                {
                    cout<<"simple interest :"<<si1<<"\n";
                }
            };

    };

int main()
{
    head :: np n;
    n.net(5000,2,50);
    n.ans();
    head2 :: si s;
    s.si2(2000,5,2);
    s.ans2();
    return 0;
}
