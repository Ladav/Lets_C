#include<stdio.h>
#include<string.h>
main()
{
    char ch1[]="abcd";
    char ch2[]="abcd ABCD";
    printf("%d",strncmp(ch1,ch2,4));        //compares  the first 4 characters only returns 0 if they match
}
