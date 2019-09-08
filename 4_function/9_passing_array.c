#include<stdio.h>

void print_array(int*,int);

main()
{
    int a[]={1,2,3,4,5,6,7};
    print_array(a,(sizeof(a)/sizeof(int)));
}
void print_array(int* a,int size)
{
   for(int i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
}
