/*
    file proc test
    20160918 c 对于文件操作的例程

*/
#include "stdio.h"
#include "stdlib.h"
#include "work.h"

int main()
{
    FILE *fp;
    printf("proc is start!\n");
<<<<<<< HEAD
<<<<<<< 45558ed383357363d477b62ef64e9fe438deab93
    printf("im in workspcae!\n");
=======
	printf("im in home!\n");
>>>>>>> home add
=======
<<<<<<< HEAD
    printf("im in workspcae!\n");
=======
	printf("im in home!\n");
>>>>>>> workhome
>>>>>>> 51df0e3cfe1927e36fa52a304d9f37f90d5593c4

    //open and make
    if((fp=fopen("test","w"))==NULL)
    {
        printf("File cannot opened!\n");
    }
    else
    {
        printf("File opened for writing!\n");
    }

    //close
    if(fclose(fp)!=0)
    {
        printf("File cannot close!\n");
    }
    else
    {
        printf("File is closed!\n");
    }
    printf("worknum=%d\n",worknum);
    getchar();
    return 0;
}
