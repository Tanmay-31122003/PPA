#include<stdio.h>

int x = 101;

void Marvellous ()
{
    int i = 21;
    int no = 51;

    printf("From main Value of no is : %d\n",no);
    printf("From main Value of i is : %d\n",i);
    printf("From main Value of x is : %d\n",x);

}

int main()
{
    int no = 11;

    printf("From main Value of no is : %d\n",no);
    printf("From main Value of x is : %d\n",x);

    Marvellous();

    return 0;
}