#include<stdio.h>

int main(void)
{
    int num[3]={{1,2},{3,4}, {5,6}};

     // arrayName is a pointer also
    printf("value of num = %u",num);
    printf("\nvalue of *num=%u",*num);
/* all the three statements have same meaning*/
    printf("\nvalue of num[1]=%d",num[1]);                              //ex- num[i]
    printf("\nvalue of *(num+1)=%d",*(num+1));                          //ex- *(num+i)
    printf("\nvalues of 1[num]=%d",1[num]);                             // ex - i[num]
    return 0;
}
