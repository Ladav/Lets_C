#include<stdio.h>

char *month_name(int);

int main(void)
{
    int mon;
    printf("Enter the sequence number of any month :");
    scanf("%d",&mon);
    char *ptr;
    ptr=month_name(mon);
    printf("at %d there is %s",mon,ptr);
}

char *month_name(int mon)
{
    char *month_name[]={"Invalid month!","jan","feb","mar","apr","may","june","july","aug","sep","oct","nov","dec"};
    return (mon<1||mon>12)?month_name[0]:month_name[mon];
}
