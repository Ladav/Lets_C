#include"conio.h"
#include"stdio.h"

#define agelimit 10

void main()
{
    int age=0;
    printf("enter your age : ");
    scanf("%d",&age);

    #if !agelimit
        printf("shoate..");
    #elif agelimit<20
        printf("khutee.");
    #endif
}
