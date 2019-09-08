#include<stdio.h>
#include<conio.h>

main()
{
    int qnt,dis=0;
    float pr,tot;
    printf("enter quantity and price :  ");
    scanf("%d%f",&qnt,&pr);
        if(qnt>1000)
            dis=10;
    tot=(qnt*pr)*(100-dis)/100;
    printf("\ntotal amount:%0.2f",tot);
}
