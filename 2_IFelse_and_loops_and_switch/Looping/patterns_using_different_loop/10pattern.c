#include<stdio.h>
main()
{
    for(int i=1;i<=4;i++){
        int m=1;
        for(int k=1;k<=i;k++){
            printf("%d",m);
            m++;
        }
        int n=m-1;

        for(int l=1;l<i;l++){
            printf("%d",n);
            n--;
        }

        printf("\n");
    }
}



