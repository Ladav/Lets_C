#include<stdio.h>

int main(void)
{
    int x[4]={};                                        // invalid in turboc
    for(int i=0;i<sizeof(x)/sizeof(int);i++)
    printf("x[%d]=%d\n",i,x[i]);
    return 0;
}
