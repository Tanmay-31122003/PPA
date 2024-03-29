#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        Base()
        {
            cout<<"Inside Base Constructor\n";
            A = 11;
            B = 21;
        }
        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Derivedx Sun\n";
        }
};

class Derived : public Base
{
    public:
        int X,Y;
        Derived()
        {
            cout<<"Inside Derived Constructor";
            X = 51;
            Y = 101;
        }
        ~Derived()
        {
            cout<<"Inside Base Destructor\n";
        }
        void Gun()
        {
            cout<<"Inside Derivedx Sun\n";
        }
};
class DerivedX : public Derived
{
    public:
    int P;
    DerivedX()
    {
        cout<<"Inside DerivedX constructor\n";
        P = 111; 
    }
    ~DerivedX()
    { 
        cout<<"Inside DerivedX destructor\n"; 
    }
    void Sun()
    {
        cout<<"Inside Derivedx Sun\n";
    }
};

int main()
{
    DerivedX dobj; // Constructor of Base Constructor of Derived
    cout<<"Size of object is: "<<sizeof(dobj)<<"\n"; // 16

    cout<<dobj.A<<"\n"; // 11
    cout<<dobj.B<<"\n"; // 21
    cout<<dobj.X<<"\n"; // 51
    cout<<dobj.Y<<"\n"; // 101
    cout<<dobj.P<<"\n"; // 111

    dobj.Fun(); // Base Fun
    dobj.Gun(); // Derived Gun
    dobj.Sun(); // Derivedx Sun

    // Destructor of Derivedx
    // Destrcutor of Derived
    // Destructor of Base
    return 0;
}