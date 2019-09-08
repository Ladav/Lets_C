#include"stdio.h"

int num,f1(void);
void main(void)
{
        int i=0;
        i=f1();
        printf("i=%d",i);
}
int f1(void)
{
    return num+1;           // an uninitialized global variable contain 0 automatically
}
