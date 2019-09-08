#include<stdio.h>

main()
{
    int no, counter=3;
    int first=0,sec=1,res=0;
    printf("enter the position of the number in the fibonacci series you want to see : ");
    scanf("%d",&no);

    if(no==1) printf("0");
    if(no==2) printf("1");

    while(counter<=no)
    {
        res=first+sec;
        first=sec;
        sec=res;
        counter++;
    }
    if(no!=1 && no!=2){
        printf("%d",res);
    }
}
