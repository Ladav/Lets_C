#include"stdio.h"

main()
{
    float x,y;
    printf("enter any no.");
    scanf("%f",&x);
    y=sq(x);
    printf("square of the no is : %f",y);
}

sq(x)                                                                                                                      // by default return type is int
float x;                                                                                                                    //k & d method
{
    return x*x;
}
