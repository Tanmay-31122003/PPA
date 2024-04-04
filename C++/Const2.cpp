#include<iostream>
using namespace std;

class Demo
{
    public:
        const int X;
        const int Y;
        int Z;
        Demo(int i, int j, int k) : X(i), Y(j)     // Initialisation List
        {
           cout<<"Inside Constructor\n";
           k = Z;
        }
};

int main()
{
    Demo obj1(11,21,51);

    cout<<obj1.X<<"\n";
    cout<<obj1.Y<<"\n";

    // obj1.X++;
    // obj1.Y++;
    obj1.Z++;

    return 0;
}