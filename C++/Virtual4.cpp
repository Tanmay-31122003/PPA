#include<iostream>
using namespace std;

class Base 
{
    public:
        int A,B;
        void Fun()                          
        {   cout<<"Base Fun\n";     }       
        virtual void Gun()                          
        {   cout<<"Base Gun\n";     }
        void Sun()                          
        {   cout<<"Base Sun\n";     }
        virtual void Mun()                          
        {   cout<<"Base Mun\n";     }
};

class Derived : public Base
{
    public:
        int X,Y;
        virtual void Gun()                          
        {   cout<<"Derived Gun\n";     }
        virtual void Sun()                          
        {   cout<<"Derived Sun\n";     }
        virtual void Run()                          
        {   cout<<"Derived Run\n";     }
};

int main()
{
    Derived dobj;
    Base *bp = &dobj;

    bp->Fun();      // Base Fun
    bp->Gun();      // Derived Gun
    bp->Sun();      // Base Sun
    bp->Mun();      // Base Mun
   // bp->Run();      // Error

    return 0;
}