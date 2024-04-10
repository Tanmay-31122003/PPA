#include<iostream>
using namespace std;

float Area(float Radius, float PI = 3.14)
{
    float Ans = 0.0f;
    Ans = PI * Radius * Radius;
    return Ans;
}

int main()
{
    float ret = 0.0f;

    ret = Area(5.8, 7.20);
    cout<<"Area is : "<<ret<<"\n";

    ret = Area(5.8);
    cout<<"Area is : "<<ret<<"\n";

    return 0;
}