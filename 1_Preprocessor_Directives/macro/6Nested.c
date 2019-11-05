#include<stdio.h>
#include<conio.h>

#define SQ(x) x*x
#define CUBE(x) SQ(x)*x

void main()
{
    int num=0;
    printf("Enter any no. : ");
    scanf("%d",&num);

    printf("square of the no. is : %d\ncube of the no. is : %d",SQ(num),CUBE(num));

}
