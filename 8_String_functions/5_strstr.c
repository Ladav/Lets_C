#include<stdio.h>
#include<string.h>
main()
{
    char ch1[]="this is String";
    char ch2[]="s";
    printf("%s",strstr(ch1,ch2));       //returns the String from the character or string searched till the end of the source string.
}
