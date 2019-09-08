#include<stdio.h>
#include<conio.h>

#define min(x,y) (x<y?x:y)

void main()
{
    int x,y;
    printf("Enter any two no to check the minimum:\n");
    scanf("%d%d",&x,&y);
    printf("%d is smaller",min(x,y));
}
// same program with functions
/*
int min(int x,int y){
    return(x<y?x:y);
}
*/
