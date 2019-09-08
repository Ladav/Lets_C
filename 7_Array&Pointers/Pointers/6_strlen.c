#include<stdio.h>

main()
{
    char z[100],c;
    int i=0;
    printf("Enter a string of characters :");
    while((c=getchar())!='\n'){
            z[i]=c;
            i++;
    }
    z[i]='\0';
    printf("the string-> %s\nhave length-> %d",z,strlen(z));
    return 0;
}
int strlen(char *a)
{
    int i=0;
    while(*a!='\0'){
    i++;
    a++;
    }
    return i;
}
