#include<iostream>
using namespace std;

class Arithematic  
{
    public:
        int No1;
        int No2;
    
    Arithematic()
    {
        No1 = 0;
        No2 = 0;
    }
    Arithematic(int A, int B)
    {
        No1 = A;
        No2 = B;
    }
    int Addition()
    {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans; 
    }
    ~Arithematic()
    {
        cout<<"Inside Destructor\n";
    }
};

int main()
{


    return 0;
}