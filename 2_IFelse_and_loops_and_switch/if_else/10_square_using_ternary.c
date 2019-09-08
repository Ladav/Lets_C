#include<stdio.h>
main()
{
    int x,ext=1;
    while(1) {
                printf("enter the any no. you want to square (sign will be preserved):");
                scanf("%d",&x);

                int y= (x<0)?-(x*x):(x*x);
                printf("square of the number is : %d",y);
                printf("\n\npress 0 to exit or 1 to continue :");
                scanf("%d",&ext);

                if(ext==0) break;
                }
}
