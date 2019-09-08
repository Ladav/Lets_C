#include<stdio.h>

#define sq(x) x*x*x
#define sq(x) x*x
// the macro defined later will work
main()
{
    printf("%d",sq(3));
}
