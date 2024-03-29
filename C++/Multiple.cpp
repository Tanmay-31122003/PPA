#include<iostream>
using namespace std;

class Demo
{
    public :
        int A;
        Demo()
        {
            A = 10;
            cout<<"Inside Demo Constructor\n";
        }
        ~Demo()
        {
            cout<<"Inside Demo Destructor\n";
        }
        void Fun()
        {
             cout<<"Inside Fun of Demo\n";
        }
};

class Hello
{
    public:
        int B;
        Hello()
        {
            B = 20;
            cout<<"Inside Hello Constructor\n";
        } 
        ~Hello()
        {
            cout<<"Inside Hello Destructor\n";
        }
        void Gun()
        {
             cout<<"Inside Gun of Hello\n";
        }
};
class Marvellous : public Demo, public Hello
{
    public:
        int C;
        Marvellous()
        {
            B = 20;
            cout<<"Inside Marvellous Constructor\n";
        } 
        ~Marvellous()
        {
            cout<<"Inside Marvellous Destructor\n";
        }
        void Sun()
        {
             cout<<"Inside Sun of Hello\n";
        }
};

int main()
{
    Marvellous mobj;

    mobj.Fun();
    mobj.Gun();
    mobj.Sun();

    cout<<mobj.A<<"\n";
    cout<<mobj.B<<"\n";
    cout<<mobj.C<<"\n";
    
    return 0;
}