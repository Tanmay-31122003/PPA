#include<stdio.h>

int multiplication(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 * No2;
    return Ans;
}

int main()
{
    int Value1 = 0, Value2 = 0, Ret = 0;

    printf("Enter First number :\n");
    scanf("%d",&Value1);

    printf("Enter Second number :\n");
    scanf("%d",&Value2);

    Ret =multiplication(Value1,Value2);

    printf("Multiplication is : %d",Ret);
    
    return 0;
}