#include<stdio.h>
main()
{
    for(int i=0;i<10;i++){
        for(int j=0;j<=i;j++){
            printf("8");
            if(i==3 && j==3)
            {
                printf("\n\nbecause i=3 and j=3 so we exit.");
                goto end;
            }
        }
        printf("\n");

    }
    end:;
}
