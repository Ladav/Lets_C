#include<stdio.h>

struct emp{
    char name[15];
    int id;
};

void display(struct emp *);

int main(void)
{
    struct emp e={"la",20};
    display(e);
    return 0;
}
void display(struct emp *temp)
{       //the dot notation (*temp).name      and     the arrow notation temp->id
        printf("name = %s and id = %d",(*temp).name,temp->id);
}
