#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        Base()
        {   cout<<"Base Constructor\n";     }
        int Addition(int i, int j)      // 1000
        {   return i+j;     }
        virtual int Sub(int i, int j)   // 2000
        {   return i-j;     }
        virtual int Multi(int i, int j) = 0;    
};

class Derived : public Base
{
    public:
        int X,Y;
        Derived()
        {   cout<<"Derived Constructor\n";   }
        virtual int Sub(int i, int j)   // 3000
        {   return i-j;     }
        virtual int Multi(int i, int j) // 4000
        {   return i*j;     }
        virtual int Div(int i, int j)   // 5000
        {   return i/j;     }

};

int main()
{
    // Base bobj;
    Derived dobj;
    Base *bp = &dobj;
    
    cout<<bp->Addition(10,11)<<"\n";        // Base Addition
    cout<<bp->Sub(10,11)<<"\n";             // Derived Sub
    cout<<bp->Multi(10,11)<<"\n";           // Derived Multi
    // cout<<bp->Div(10,11)<<"\n";             // Error
    return 0;
}