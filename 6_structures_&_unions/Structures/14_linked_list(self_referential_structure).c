#include<stdio.h>
#include<conio.h>

struct node{
    int value;
    struct node *next;
}*start;

void insert(void);
void delete_node(void);
void list(void);
int menu_struct(void);

int main(void)
{
    int choice;
    for(;;)
    {
        choice = menu_struct();
        switch(choice)
        {
            case 1: insert();
                break;
            case 2: delete_node();
                break;
            case 3: list();
                break;
            case 4:
                exit(0);
        }
    }
    return 0;
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
void insert(void)
{
    struct node *ptr ,*check;
    int item;
    //(struct node *)->it convert the allocated storage to struct node 'pointer' type
    /*malloc allocates storage according to the object size eg->sizeof(struct type *);
        in malloc (struct type *) pointer is used because until a variable is defined struct node is nothing but a template ,we can use a normal variable in too.
        ex->sizeof( struct type var);*/
    ptr=(struct node *)malloc(sizeof(struct node *));
    printf("Enter values:");
    scanf("%d",&ptr->value);

    if(start==NULL){
        start=ptr;
        ptr->next=NULL;
    }
    else
    {
        printf("Enter the element after which the current should be inserted or enter 0 to insert it in the beginning:");
        scanf("%d",&item);
        if(item==0){
            ptr->next=start;
            start = ptr;
        }
        else{
            check=start;
            while(check!=NULL)
            {
                if(check->value==item){
                    break;
                }
                check=check->next;
            }
            if(check==NULL){
                printf("Incorrect Value. Try Again!\n");
                return;
            }
            else{
                ptr->next=check->next;
                check->next=ptr;
            }
        }
    }
}
void delete_node(void)
{
    struct node *ptr,*check,*prev;
    int item;
    if(start==NULL)
    {
        printf("\nList is empty!");
        getch();
    }
    else
    {
        printf("Enter item to be deleted:");
        scanf("%d",&item);
        if(start->value==item){
            start=start->next;
            return;
        }
        if(start->value==item && start->next==NULL){
            start == NULL;
            return;
        }
        else
        {
            check=start;
            while(check!=NULL)
            {
                if(check->value==item) break;
                prev=check;
                check=check->next;
            }
            if(check==NULL)
            {
                printf("Item doesn't exist!\n");
                return;
            }
            else
            {
                check=check->next;
                prev->next=check;
            }
        }
    }
}
void list(void)
{
    struct node *ptr;
    ptr=start;
    printf("\n------------LIST--------------\n");
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
}
