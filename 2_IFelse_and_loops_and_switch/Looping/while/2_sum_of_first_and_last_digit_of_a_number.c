#include<stdio.h>

main()
{
    int num=0;
    int first,last,temp;
    printf("Enter the number (to find sum of first and last digit ):");
    scanf("%d",&num);

    last=num%10;
    first=num;
    while(first>9)
    {
        first=first/10;
    }
    printf("sum of the first and last digit of this number is :%d",(first+last));

}
