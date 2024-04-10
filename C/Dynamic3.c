#include<stdio.h>
#include<stdlib.h>  // For Malloc, Calloc, Realloc & Free Function

int main()
{
    int *ptr = NULL;

    ptr = (int *)malloc(5 * sizeof(int));

    // Use the Memory

    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    free(ptr);

    return 0;
}