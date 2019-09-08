#include<stdio.h>

int main(void)
{
    int x[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int month,day,days_gone=0;
    printf("Enter month:");
    scanf("%d",&month);
    if(month<0||month>12)
    {
        printf("invalid input!");
        return 1;
    }
     printf("Enter day:");
    scanf("%d",&day);
    if(day<0||day>31)
    {
        printf("invalid input!");
        return 1;
    }
    for(int i=1;i<month;i++)
    {
        days_gone+=x[i-1];
    }
    printf("Number of days gone till now-> %d.",days_gone+day);
    return 0;
}
