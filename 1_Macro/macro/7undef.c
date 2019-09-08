#include<stdio.h>
#include<conio.h>

#define x 100

int glob=x;

#define y 10
#undef x

void main()
{
    printf("values of x and y are %d and %d.",glob,y);
}
