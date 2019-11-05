#include<stdio.h>

#define sq(x) x*x
#define cube(x) sq(x)*x

main()
{
    int x=10;
    printf("jaa %d,%d",cube(x),x);

}
