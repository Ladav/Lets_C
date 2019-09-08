#include<stdio.h>

main()
{
    int no, counter=3;
    int f=0,s=1,res;
    printf("enter the value of n to print n numbers of series:");
    scanf("%d",&no);
    if(no>=1) printf("0");
    if(no>=2) printf("\t1");

    if(no>2)
    while(counter<=no)
    {
        res=f+s;
        printf("\t%d",(res));
        f=s;
        s=res;
        counter++;
    }
}

