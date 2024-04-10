#include<stdio.h>
#include<stdlib.h>  // For Malloc, Calloc, Realloc & Free Function

int main()
{
    int *ptr = NULL;

    ptr = (int *)realloc(NULL, 10 * sizeof(int));   // malloc

    ptr = (int *)realloc(ptr, 0);   // free

    free(ptr);

    return 0;
}