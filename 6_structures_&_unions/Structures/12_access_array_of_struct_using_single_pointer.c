#include<stdio.h>

int main(void)
{
    struct emp
    {
        char name[10];
        int id,age;
    }e[3];

    struct emp *p;
    for(p=e ; p<=(e) ; p++ )                                    // because e is an array of structure so e contains the address that why we  have used p=e
    {
        printf("Enter id ,name and age :");
        scanf("%d %s %d",&p->id,&p->name,&p->age);
    }
    printf("<--------------list---------------> \n ID \t NAME \t AGE :");
    for(p=e ; p<=(e) ; p++)
        printf("\n%d \t %s \t %d ",(*p).id,p->name,p->age);
    return 0;
}

