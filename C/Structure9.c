#include<stdio.h>

struct Demo
{
    int no;
    int data;
};

int main()
{
    struct Demo obj;
    
    struct Demo *ptr = &obj;

    obj.no = 11;        //direct Access Operator (Dot Operator) 

    ptr->data = 21;     //Indirect Accessing Operator(Arrow operator)

    return 0;
}