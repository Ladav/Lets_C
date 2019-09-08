#include<stdio.h>

union pw
{
    short int i;
    char ch[2];
};

int putsw(short int ,FILE *);

int main(void)
{
    FILE *fp;
    fp=fopen("temp.txt","wb+");
    if (fp==NULL)
    {
        printf("can't open the file..\n");
        exit(1);
    }
    putsw(1024,fp);
    fclose(fp);
    return 0;
}
int putsw(short int num,FILE *fp)
{
    union pw p;
    p.i=num;                                                       //remember i and ch both are sharing the same storage
    putc(p.ch[0],fp);                                   /* putc is used it will write first half */
    return(putc(p.ch[1],fp));                       // write the second half
}
