/*
    file proc test
    20160918 c �����ļ�����������

*/
#include "stdio.h"
#include "stdlib.h"
//#include <>

int main()
{
    FILE *fp;
    printf("proc is start!\n");
	printf("im in home!\n");

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
    getchar();
    return 0;
}
