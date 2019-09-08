#include<stdio.h>

void dis(int *[]);
main()
{
    int x[]={1,2,3};
    int *xp[]={x,x+1,x+2};
    dis(xp);
}
void dis(int *ptr[])
{
for(int i=0;i<3;i++)
    printf("%d\t",*(ptr[i]));
}
