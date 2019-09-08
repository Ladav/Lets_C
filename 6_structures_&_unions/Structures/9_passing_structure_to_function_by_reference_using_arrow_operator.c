#include<stdio.h>
//scheme call by reference using ->

struct emp
{
    char name[10];
    int id;
};
void f1(struct emp *);

int main(void)
{
    struct emp e={"all",1};
    f1(&e);
    printf("\n inside main \nname = %s and id =%d .",e.name,e.id);
    return 0;
}

void f1(struct emp *par)
{
    par->id=21;
    printf("\n inside f1 \n name = %s and id =%d .",par->name,par->id);
}
