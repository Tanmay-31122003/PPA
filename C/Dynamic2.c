#include<stdio.h>
#include<stdlib.h>  // For Malloc, Calloc, Realloc & Free Function

int main()
{
    int Arr[5];     // Static Memory Allocation 
    int Size = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&Size);

    ptr = (int *)calloc(Size , sizeof(int));

    // Use the Memory

    free(ptr);

    return 0;
}