#include<stdio.h>
main()
{
    int m=0;
    printf("enter the n:");
    scanf("%d",&m);

    for(int i=1,k=1 ;i<=m;i++,k=i){
        for(int j=1;j<=i;j++){
            printf("%d  ",k);

            if(k!=1) k=k+m-j;
        }
        printf("\n");
    }
}

