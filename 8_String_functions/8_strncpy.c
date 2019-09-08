#include<stdio.h>
#include<string.h>
main()
{
    char ch1[]="this is String.";
    char ch2[5];
    strncpy(ch2,ch1,4);
    printf("%s",ch2);
}
