#include<stdio.h>

void Display(int No)        // Calee
{
    int iCnt = 0;

    while(iCnt < No)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
    }
}

int main()
{
    Display(4);     //Caller
    
    return 0;
}