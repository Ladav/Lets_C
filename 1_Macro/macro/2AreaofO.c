#include<stdio.h>
#include<conio.h>

#define pi 3.14

void main()
{
    int rad;

    printf("enter radius of the circle : ");
    scanf("%d",&rad);

    printf("Area : %0.2f \n Parameter : %0.2f",(rad*rad*pi),(2*pi*rad));

}
