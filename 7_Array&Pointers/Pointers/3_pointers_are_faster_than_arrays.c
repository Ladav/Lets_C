#include"stdio.h"

void main(void)
{
    int a[]={1,2,3,45,7,6},*j;
    j=a;                                        // or j=&a[0];     both will work same

    // both the cases are same
    //              CASE 1
    for(int i=0;i<6;i++)
    {
    printf("element ->a[i] = %d\n",j[i]);
    }
/*                  CASE 2
    for(int i=0;i<6;i++)
    {
    printf("element ->a[i] = %d\n",*j);
    j++;
    }
*/
}
