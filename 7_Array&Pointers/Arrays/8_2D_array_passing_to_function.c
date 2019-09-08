#include<stdio.h>
void f1(int (*)[2]);
int main(void)
{
    int a[][2]={1,2,3,4,5,6,7,8};
    f1(a);
    return 0;
}
void f1(int (*n)[2])
{
    int *t;
    for(int i=0 ;i<4;i++)
    {
        t=n;
        for(int j=0;j<2;j++)
            printf("%d\t",*(t+j));
        n++;
    }
}
