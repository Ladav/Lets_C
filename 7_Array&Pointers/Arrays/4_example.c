#include<stdio.h>

void dis(int *);
void show(int **);
int main(void)
{
    int i;
    int marks[6]={1,2,3,4,5,6};

    for(i=0;i<6;i++)
    dis(&marks[i]);
}

void dis(int *n)
{
    show(&n);
}

void show(int **m)
{
    printf("%d\t",**m);
}
