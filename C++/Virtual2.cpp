#include<iostream>
using namespace std;

class Base 
{
    public:
        int A,B;
        void Fun()                          // Defination
        {   cout<<"Base Fun\n";     }       
        void Gun()                          // Defination
        {   cout<<"Base Gun\n";     }
        void Sun()                          // Defination
        {   cout<<"Base Sun\n";     }
};

class Derived : public Base
{
    public:
        int X,Y;
        void Gun()                          // Re-Defination
        {   cout<<"Derived Gun\n";     }
        void Sun()                          // Re-Defination
        {   cout<<"Derived Sun\n";     }
        void Run()                          // Re-Defination
        {   cout<<"Derived Run\n";     }
};

int main()
{
    Base bobj;
    Derived dobj;

    Base *bp = NULL;
    Derived *dp = NULL;

    bp = &bobj;     // Nocasting
    dp = &dobj;     // Nocasting

    bp = &dobj;     // Upcasting
    dp = &bobj;     // Downcasting (Not Allowed)

    return 0;
}