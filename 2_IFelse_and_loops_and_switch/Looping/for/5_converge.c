#include<stdio.h>
#include<string.h>
void converge(char *tar,char *src);

main()
{
    char tar[]="XXXXXXXXXXXXXXXXXX";
    converge(tar,"this is the source");
}

void converge(char *tar,char *src)
{
    int i,j;
    for(i=0 , j=strlen(tar);i<=j;i++,j--)
    {
                printf("%s\n",tar);
        tar[i]=src[i];
        tar[j]=src[j];

    }
}
