#include<stdio.h>

//It's entry point function

#define DOZEN 12
#define KILO 1000
int main()
{
    int no = DOZEN;
    int i = KILO;

    printf("Jay Ganesh...\n");    
    printf("%d\n",no);
    printf("%d\n",i);

    return 0;
}


// gcc preprocessor.c -save-temps -o myexe