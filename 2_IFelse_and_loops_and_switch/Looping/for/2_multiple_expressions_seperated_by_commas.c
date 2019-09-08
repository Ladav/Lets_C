#include<stdio.h>
//in exp2(the conditions part only the right most condition is selected and used/applied
main()
{
    int i,j;

    for(i=0,j=100;j>9,i!=j;i++,j--)
    {
        printf("i=%d and j=%d\n",i,j);
    }
}
