#include<stdio.h>

main()
{
    int a[]={1,2,3,4};
    int *i,*j;
    i=&a[0];
    j=&a[1];
    printf("j+i=%u and j-i",j+i,j-i);
}
