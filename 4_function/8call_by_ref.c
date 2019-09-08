#include<stdio.h>

swap(unsigned int ,unsigned int);

main()
{
    int x=10,y=20;

    swapr(&x,&y);

    printf("a=%d b=%d",x,y);
}
swapr(unsigned int *a,unsigned int *b)    //only int also work unsigned int because address cant be negative
{
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}
