#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    int fd = 0;
    int iRet = 0;
    char Data[] = "Marvellous Infosystems";

    printf("Enter Name of file that you want to Open :\n");
    scanf("%s",Name);

    fd = open(Name, O_RDWR);

    iRet = write(fd,Data,22);

    printf("%d bytes gets successfully written into the file \n",iRet);

    close(fd);

    printf("Flie is closed");

    return 0;
}