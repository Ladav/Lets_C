#include<stdio.h>

main()
{
    int fir,sec,temp1,temp2,rem;

    printf("enter 2 positive numbers:");
    scanf("%d%d",&fir,&sec);

    temp1 = fir>sec?fir:sec;
    temp2 = fir>sec?sec:fir;

    rem=temp1%temp2;
    if(rem==0) printf("hcf is = %d",temp2);
    else
    {
        while(rem!=0)
        {
            temp1=temp2;
            temp2=rem;
            rem=temp1%temp2;
        }
        printf("hcf is = %d",temp2);
    }
}
