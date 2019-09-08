#include<stdio.h>
main()
{
    int a,b;
    printf("enter two no.s :");
    scanf("%d%d",&a,&b);
    if(a<b)
        goto out1;
    else
        goto out2;

    out1:   printf("b is greater..");
    out2:   printf("a is greater..");
}
