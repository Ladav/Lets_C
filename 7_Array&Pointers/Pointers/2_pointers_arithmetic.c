#include<stdio.h>

void main(void)
{
    int i=2,*x;
    float j=5.5,*y;
    char k='c',*z;
    x=&i;
    y=&j;
    z=&k;
    printf("the value of x = %u\n",x);
    printf("the value of y = %u\n",y);
    printf("the value of z = %u\n",z);
    x++;                                                                          // incremented the pointers of different types
    y++;
    z++;
    z-y;
    printf("after i incremented the pointers of different types\n");
    printf("the new  value of x = %u\n",x);
    printf("the new value of y = %u\n",y);
    printf("the new value of z = %u\n",z);

    printf("the resultant change in x(int) is of ->4 bytes \t in y(float)->4 bytes \t in z(char)-> 1 byte");
}
