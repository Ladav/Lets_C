#include<stdio.h>

main()
{
    int yr,p,i;
    float r;

    for(i=0;i<2;i++){
        printf("enter the amount , period , rate of interest :");
        scanf("%d%d%f",&p,&yr,&r);
        printf("Interest earned : %0.2f \n",(p*yr*r/100));
    }
}
