#include<stdio.h>
void main(void)
{
    int a[]={1,2};
    int *ptr;
    ptr=a;
    for(int i=0;i<2;i++)
    printf("%d\t",ptr[i]);
}
