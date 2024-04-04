#include<iostream>
using namespace std;

const int A = 10;       // Constant Global VAriab;e
int B = 20;

class Demo
{
    public:
        int X,Y;
        Demo()
        {
            X = 10;
            Y = 20;
        }
        void fun(int i, const j)    // Constant Input Argument 
        {
            int No1 = 11;
            Const int No2 = 21; // Constant Local Variable
            i++;
            j++;
            No1++;
            No2++;
        }
};

int main()
{
    Demo obj1;
    const Demo obj2;        // Constatnt Object 
    
    obj1.fun(51,101);

    obj1.X++;
    obj1.Y++;
    obj2.X++;
    obj2.Y++;

    return 0;
}