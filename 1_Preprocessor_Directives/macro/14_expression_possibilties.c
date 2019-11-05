#include"conio.h"
#include "stdio.h"

#define x(y) printf(#y)
// if haven't used # here it will be a error
void main()
{
     int a=0,b=1;
    x(a+b);
}

