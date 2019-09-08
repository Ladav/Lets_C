#include<stdio.h>
#include<conio.h>

main()
{
    char ch[200];
    int count=0,temp;

    printf("enter you name :");
    while((ch[count]=getchar())!='\n')
        count++;
   temp=count;
   count=0;
    while(temp>=count)
    {
        putchar(toupper(ch[count]));
        count++;
    }
}
