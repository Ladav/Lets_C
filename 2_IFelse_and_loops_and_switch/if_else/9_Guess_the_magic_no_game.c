#include"stdio.h"
#include<stdlib.h>

main()
{
    int x =0;
    int y = rand();
    printf("YOU HAVE TO GUESS A NO. BETWEEN 0 TO %d :",RAND_MAX);
    scanf("%d",&x);
    if(y==x) printf("its a match..");
    else printf("incorrect guess no. was : %d ",y);
}
