#include<stdio.h>

int main()
{
    int arr [5] ={10,20,30,40,50};

    printf("\n%d",arr[0]);
    printf("\n%d",arr[2]);
    printf("\n%d",arr[3]);

    printf("\n%d",sizeof(arr));
    printf("\n%d",sizeof(arr[1]));
    printf("\n%d",sizeof(arr[2]));
    printf("\n%d",sizeof(arr[3]));

    printf("\n%d",arr);
    printf("\n%d",&arr);
    printf("\n%d",&(arr[0]));
    printf("\n%d",&(arr[1]));
    printf("\n%d",&(arr[2]));

    return 0;
}