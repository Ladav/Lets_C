#include<stdio.h>

int main(void)
{
    int a[]={1,2,3,4,5,6,7,8};
    int *ap[]={a,a+1,a+2};
    printf("ap=%u *ap=%u *(*ap)=%u",ap,*ap,*(*ap));
    return 0;
}
