#include"stdio.h"
//it worked in turbo c,,#pragma directive is working in turbo c only
#pragma warn _rvl
#pragma warn _rch

int fun1()
{
    printf("\nno return value.");
}

int fun2()
{
    int x=0;
    return x;
    printf("unreachable code is here.");
}

main()
{
    int y;
    fun1();
    y=fun2();
}
