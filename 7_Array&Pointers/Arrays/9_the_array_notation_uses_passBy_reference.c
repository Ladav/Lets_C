#include<stdio.h>
void f1(int []);
main()
{
    int a[]={1,2,3};
    display(a);
    alter(a);
    display(a);
}

void display(int b[])
{
    for(int i=0;i<3;i++)
        printf("%d\t",b[i]);
    printf("\n");
}
void alter(int b[1100])             // it not gonna create a new array of size 1100 but just aware the compiler that a pointer(address of base) will be passed
{
    b[0]=10;
    b[1]=9;
    b[2]=8;
    b[3]=7;     // because c does not have bound checking ,it will not be a syntax error
}
