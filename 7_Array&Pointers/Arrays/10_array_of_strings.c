#include<stdio.h>
#define max 3
char a[max][40];

main()
{
    int t;
    printf("Enter text:\n");
    for(t=0;t<max;t++){
            printf("%d.",t);
        gets(a[t]);
        if(!*a[t]) break;           /*break loop when an empty line found*/
    }
    printf("\nData you had entered.\n");
    for(int i=0;i<t;i++)
    {
        for(int j=0;a[i][j];j++)
        {
            //printf("%c",a[i][j]);
            //both are equivalent
            putchar(a[i][j]);
        }
        printf("\n");
    }

}
