#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("Number of Command Line argument : %d\n",argc);

    for(int i = 0; i < argc; i++)
    {
        printf("%s\n",argv[i]);
    }

    return 0;
}

// gcc Command.c -o Myexe
// Myexe.exe PPA Marvellous 11 LB 21