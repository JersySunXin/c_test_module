/*
    file proc test
    20160918 c �����ļ�����������

*/
#include "stdio.h"
#include "stdlib.h"
#include "work.h"

int main()
{
    FILE *fp;
    printf("proc is start!\n");
    printf("im in workspcae!\n");

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
