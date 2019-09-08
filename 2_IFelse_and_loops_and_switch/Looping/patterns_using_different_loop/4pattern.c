#include<stdio.h>
main()
{
    for(int i=1,k=1;i<5;i++){
        for(int j=0;j<i;j++,k++)
            printf("%d",k);
        printf("\n");
    }
}

