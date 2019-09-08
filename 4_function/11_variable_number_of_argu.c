#include<stdio.h>

void sumndweds(int ,int ,...);

main()
{
    sumndweds(2,3);
    sumndweds(3,4,6);
    sumndweds(1,2,3,4);
}

void sumnn(int a,int b){
    printf("\nsum:%d",(a+b));
}
void sumndweds(int a,int b,int c){
    printf("\nsum:%d",(a+b+c));
}
void sumndweds(int a,int b,int c,int d){
    printf("\nsum:%d",(a+b+c+d));
}
