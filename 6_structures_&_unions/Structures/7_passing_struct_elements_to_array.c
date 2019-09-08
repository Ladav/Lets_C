#include<stdio.h>
void display(char *,int);

struct emp
{
    char name[10];
    int id;
};

int main(void)
{
    struct emp e={"la dav",20};
    display(e.name,e.id);
    return 0;
}

void display(char *a,int id)
{
    printf("name = %s and id = %d",a,id);
}
