#include<iostream>

namespace Marvellous
{
    class Demo
    {
        // Logic
    };
}

namespace PPA
{
    class Hello
    {
        //
    };
}

using namespace Marvellous;

int main()
{
    std::cout<<"Inside Main";
    Demo dobj;
    PPA::Hello hobj;
    
    return 0;
}