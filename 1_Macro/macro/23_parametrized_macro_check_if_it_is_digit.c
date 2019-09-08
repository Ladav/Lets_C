#include<stdio.h>

#define ISDIGIT(x) (x>=48 && x<=57)

main()
{
    char c;
    printf("enter any digit : ");
    scanf("%c",&c);
    if(ISDIGIT(c))
        printf("\nyou have enter the value : %c and its ascii value is %d",c,c);
    else
        printf("not a valid input..");
}
