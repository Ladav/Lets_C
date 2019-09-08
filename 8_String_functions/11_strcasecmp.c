#include<stdio.h>
#include<string.h>
main()
{
    char ch1[]="abcd";
    char ch2[]="ABCD";
    printf("%d",strcasecmp(ch1,ch2));   //upper or lower does not matter returns 0 if matches
}
