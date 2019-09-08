#include<stdio.h>
#include<conio.h>
#include"math.h"

main()
{
    int a,b,c;
    float d,x1,x2;
    printf("enter values for a, b, c (a(x*x)+b(x)+c):");
    scanf("%d%d%d",&a,&b,&c);

    d=(b*b)-4*(a*c);

    if(d==0){
            x1=x2=(-b)/(2*a);
            printf("\nboth roots are equal : %0.3f",x1);
    }
    else if(d<0)
        printf("\nImaginary roots.");
    else if (d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("\nroots are real and equal -> x1=%0.3f and x2=%0.3f",x1,x2);
    }
}
