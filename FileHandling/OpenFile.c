#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    int fd = 0;

    printf("Enter Name of file that you want to Open :\n");
    scanf("%s",Name);

    fd = open(Name, O_RDWR);
    if(fd == -1)
    {
        printf("Unable to Open file\n");
    }
    else
    {
        printf("File gets Opened with FD %d\n",fd);
    }

    close(fd);

    printf("Flie is closed");
    
    return 0;
}