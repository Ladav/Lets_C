#include<stdio.h>

void print_upper(char *,int);

main()
{
    //char ch[]={'c','h','a','n','d','i','g','a','r','h','\0'};
    char ch[80];
    int i=0;
    while((ch[i]=getchar())!='\n')
        i++;
    print_upper(ch,(sizeof(ch)/sizeof(char)));
    puts(ch);
}

void print_upper(char *c,int size)
{
    char *temp;
    temp=c;
    for(int i=0;i<size;i++)
    {
        temp[i]=toupper(temp[i]);
    }
}
