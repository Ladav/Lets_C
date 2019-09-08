#include<stdio.h>
main()
{
    int x=0;
    if (1==fu())
    printf("valid entry value returned is %d",fu());
    else
    printf("invalid entry value returned is %d",fu());
}

fu()
{
    int y=0;
    return (y<9 && y>0);
}
