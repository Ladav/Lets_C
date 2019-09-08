#include<stdio.h>

long int fact(int);

main()
{
    int num;
    printf("enter any positive number : ");
    scanf("%d",&num);
    printf("factorial of %d is %ld",num,fact(num));

}

long int fact(int num)
{
    if (num==0)
        return 1;
    else
        return (fact(num-1)*num);
}
