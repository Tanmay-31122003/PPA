#include<iostream>
using namespace std;

class Demo
{
    public:
        int X, Y;
        Demo()
        {
            X = 10;
            Y = 20;         
        }
        void Fun()              // non Constant function
        {
            cout<<"Inside Fun\n";
            X++;
            Y++;
        }
        void Gun() const        // Constant function
        {
            cout<<"Inside Gun\n";
           // X++;
           // Y++;
        }
};

int main()
{
    Demo obj1;
    const Demo obj2;

    obj1.Fun();     // Normal Object Normal Function
    obj1.Gun();     // Normal Object constant Function

    obj2.Fun();     // Constant Object normal function      // Not Allowed
    obj2.Gun();     // Constant object Constant Function

    return 0;
}