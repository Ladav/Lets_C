#include "conio.h"
#include "stdio.h"

#define swp(x,y) {                        \
                                        x=x+y;       \
                                    y=x-y;         \
                                    x=x-y;          \
                                }

void main()
{
    int c=1,d=2;
    printf("c=%d ,d=%d",c,d);
    swp(c,d);
    printf("\nc=%d ,d=%d",c,d);
}
