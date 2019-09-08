#include<stdio.h>
#include<string.h>
main()
{
    char ch[]="this";
    strcat(ch," is String.");       //returns the string and make the changes permanent also
    printf("%s",ch);
}
