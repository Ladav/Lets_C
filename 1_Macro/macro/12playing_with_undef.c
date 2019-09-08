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

    #undef swp
/*
    //swp(d,c);  is invalid now
    #define swp(x,y) {                        \
                                        x=x+y;       \
                                    y=x-y;         \
                                    x=x-y;          \
                                }*/
    swp(c,d);
    printf("\nafter new defination..");
    printf("\nc=%d ,d=%d",c,d);

}
