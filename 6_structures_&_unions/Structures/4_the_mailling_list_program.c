#include<stdio.h>
#define MAX 100

void init_struct(void);
int menu_struct(void);
void del_struct(void);
void set_struct(void);
void list_struct(void);
void sort_list(void);
int find_free();

struct mail
{
    int id;
    char name[10];
    int age;
};
struct mail m[MAX];

int main(void)
{
    int choice;
    init_struct();

    for(;;)
    {
        choice = menu_struct();
        switch(choice)
        {
            case 1: set_struct();
                break;
            case 2: del_struct();
                break;
            case 3: list_struct();
                break;
            case 4:
                exit(0);
        }
    }
    return 0;
}
void init_struct(void)
{
    for(int i=0;i<MAX;i++)
    {
        m[i].name[0]='\n';
        m[i].id=NULL;
    }
}
int menu_struct(void)
{
    int choice;
    up:
    printf("\nEnter your choice:\n1->Enter record \t 2 ->Delete record\t 3 ->Display list\t 4 ->Exit:");
    scanf("%d",&choice);
    if(choice<1 || choice>4)
    {
        printf("Invalid input! Try again.\n");
        goto up;
    }
    return choice;
}
//inserting a record
void set_struct(void)                                       //add constraint to prevent duplication
{
        int temp = find_free();
        if(temp==-1)
            return;
        else
        {
            printf("\nEnter ID, Name ,Age :");
            scanf("%d %s %d",&m[temp].id,&m[temp].name,&m[temp].age);
            if(m[temp].name[0]!='\n' && m[temp].age>0 && m[temp].id!=NULL)
                printf("Record added successfully.");
            else {
                m[temp].name[0]='\n';
                printf("Invalid Record.");
            }
        }
}
int find_free(void)
{
    int i;
    for( i=0;i<MAX && m[i].name[0]!='\n';i++);
        if(i==MAX)
        {
                printf("\nList is Full...");
                return (-1);
        }
    else return(i);
}
//deleting a record
void del_struct(void)
{
    int ids,temp;
    printf("\nEnter ID :");
    scanf("%d",&ids);
    for(temp=0;temp<MAX-1 && m[temp].id!=ids;temp++);
    if(ids>0 && ids<=MAX && (m[temp].name[0]!='\n' || m[temp].id!=NULL))
    {
        m[temp].name[0]='\n';
        m[temp].id=NULL;
        printf("Record deleted successfully.");
    }
    else
        printf("Record not found.");
}
//list record
void list_struct(void)
{
    sort_list();
    printf("<--------------LIST--------------->\nID \t NAME \t AGE\n");
    for(int temp=0 ; temp<MAX ; temp++)
    {
        if(m[temp].id==NULL)
            continue;
        else
        {
            printf("%d \t %s \t %d \n",m[temp].id,m[temp].name,m[temp].age);
        }
    }
}
//sorting the list using selection sort
void sort_list(void)
{
    struct mail temp;
    int min_index;
    for(int i = 0 ; i<MAX ; i++)
    {
        min_index=i;
        for(int j=i+1 ; j<MAX ; j++)
        {
            if(m[min_index].id==NULL)
                break;
            if(m[j].id==NULL)
                continue;
            else if(m[min_index].id>m[j].id)
            {
                min_index=j;
            }
        }
                temp=m[min_index];
                m[min_index]=m[i];
                m[i]=temp;
    }
}
