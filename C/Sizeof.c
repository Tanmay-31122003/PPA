#include<stdio.h>

int main ()
{
    int i = 11;                 //4 byte
    char ch = 'A';              //1 byte
    float f = 90.89;            //4 byte
    double b = 90.8789;         //8 byte

    int arr[5];         //20 byte
    double brr[5];      //40 byte
    float crr[5];       //20 byte
    char drr[5];        //5 byte


    printf("\nsize of i : %d",sizeof(i));
    printf("\nsize of ch : %d",sizeof(ch));
    printf("\nsize of f : %d",sizeof(f));
    printf("\nsize of b : %d",sizeof(b));

    printf("\nsize of arr : %d",sizeof(arr));
    printf("\nsize of brr : %d",sizeof(brr));
    printf("\nsize of crr : %d",sizeof(crr));
    printf("\nsize of drr : %d",sizeof(drr));

    return 0;
}