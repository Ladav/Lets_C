#include<stdio.h>

int main(void)
{
    int marks[]={12,21,39,44,55,46,70};
    int *i,*j;
    i=&marks[1];
    j=&marks[6];
    printf("the value of i %u\nthe value of j %u\n",i,j);
    printf("total number of elements between 2 and 7 : %u",(j-i));      //i-j is illegal
    //j-i tell us about the integer difference between the two,it starts from 2 then 3 4 5 6 end with starting address of 7 but doesn't include 7
    return 0;
}
