#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    int fd = 0;
    int iRet = 0;
    char Data[30] = {'\0'};

    printf("Enter Name of file that you want to Open :\n");
    scanf("%s",Name);

    fd = open(Name, O_RDWR);

    iRet = read(fd,Data,15);

    printf("%d bytes gets successfully read From the file \n",iRet);
    printf("%s\n",Data);

    close(fd);

    printf("Flie is closed");

    return 0;
}