#include<stdio.h>
int fibo(int);

main()
{
    int num;
    printf("enter the number of fibonacci terms to print : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        printf("%d\t",fibo(i));
    }
}

int fibo(int num)
{
    if (num==1)
        return 0;
    if(num==2)
        return 1;
    else
        return (fibo(num-1)+fibo(num-2));
}
