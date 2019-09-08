#include<stdio.h>
main()
{
    for(int i=1,m=0;i<=4;i++){
        for(int j=3;j>=i;j--)
            printf(" ");
        for(int k=1;k<=(i+m);k++){
            printf("*");
        }
        printf("\n");
    m++;
    }
}


