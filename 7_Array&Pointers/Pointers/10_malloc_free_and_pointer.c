#include<stdio.h>
#include<stdlib.h>
// first 10 integer raised upto 4th power
int getpow(int ,int);
int main(void)
{
    int (*ptr)[10];                 //pointer to 10 1D arrays (so it is a pointer to 2D array)
    register int i,j;
    ptr=malloc(sizeof(int)*40);  //i am gonna print 10 rows and 4 cols so 4*10=40
    if(!ptr){                                                       // checking if pointer is null
        printf("insufficent memory");
        exit(1);
    }
    for(i=1;i<11;i++)
        for(j=1;j<5;j++)
            ptr[j-1][i-1]=getpow(i,j);                  // we know pointer can be used as array once an base address is assigned

    for(i=1;i<11;i++){
        for(j=1;j<5;j++)
            printf("%10d",ptr[j-1][i-1]);
        printf("\n");
    }
}
int getpow(int a,int b)
{
    register int t=1;
    for(;b;b--)
        t=t*a;
//printf("%d",t);
    return t;
 }
