#include<stdio.h>
main()
{
    for(int i=1,m=1;i<=4;i++){
            m=i;
        for(int j=3;j>=i;j--)
            printf(" ");

        for(int k=1;k<=i;k++){
            printf("%d",m);
            m++;
        }
        int n=m-2;

        for(int l=1;l<i;l++){
            printf("%d",n);
            n--;
        }

        printf("\n");
    }
}



