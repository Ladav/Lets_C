#include<stdio.h>
#include<conio.h>

#define swap(x,y) {                     \
                                        int z;          \
                                        z=x;            \
                                        x=y;            \
                                        y=z;               \
}

void main()
{
    int a=3,b=4;
    swap(a,b);

    printf("a=%d ,b=%d",a,b);
}


//backslash is used write a multiline macro
