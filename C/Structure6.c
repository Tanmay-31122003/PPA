#include<stdio.h>
struct Hello
{
    int no;
    float f;
};
struct Demo 
{
    int data;
    struct Hello hobj;        //Error
};

int main ()
{
    struct Demo obj;
    
    return 0;
}