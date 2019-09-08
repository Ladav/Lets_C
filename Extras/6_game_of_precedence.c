#include<stdio.h>

void main(void)
{
    int a[]={1,3};
    int i=0;
    a[i++]=10;                                          //even when the i++ is inside [] still its precedence is the lowest
    printf("%d,%d",a[0],a[1]);
}
