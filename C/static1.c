#include<stdio.h>

int Marvellous ()
{
    static int x = 10;
    x++;
    printf("value of x is : %d\n",x);
}

int main()
{
    printf("Demonstration of static storage class...\n");

    Marvellous();
    Marvellous();
    Marvellous();
    Marvellous();

    return 0;
}