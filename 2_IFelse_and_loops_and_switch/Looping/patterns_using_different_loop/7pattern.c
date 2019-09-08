#include<stdio.h>
main()
{
    for(int i=1;i<=4;i++){
        for(int m=1;m<i;m++)
        if(i!=1) printf(" ");
        for(int j=4;j>=i;j--)
            printf("*");
        printf("\n");
    }
}


