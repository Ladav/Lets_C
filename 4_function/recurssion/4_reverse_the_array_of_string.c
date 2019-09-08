#include<stdio.h>

void rev(void);

main()
{
    printf("write something ->");
    rev();
}

void rev()
{
    char ch='0';

    if((ch=getchar())!='\n')
        rev();
    putchar(ch);
    return;
}
