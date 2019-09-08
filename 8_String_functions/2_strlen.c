#include<stdio.h>
#include<string.h>
main()
{
    char ch1[]="abcd";
    char ch2[strlen(ch1)];
    strcpy(ch2,ch1);
    printf("%d",strlen(ch2));
}
