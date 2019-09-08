#include<stdio.h>

int main(void)
{
    int a[][2]={1,2,3,4,5,6,7,8};
    printf("add of a=%u and value of a=%u\n",&(a),a);
    printf("using subscript ->\n");
    for(int i=0;i<4;i++)
        for(int j=0;j<2;j++)
        printf("%d,",(a[i][j]));

    printf("\nvalue of a[i]\n");
    for(int i=0;i<4;i++)
        printf("%d,",(a[i]));

    printf("\nvalue of (a[i]+j)\n");
    for(int i=0;i<4;i++)
        for(int j=0;j<2;j++)
        printf("%d,",(a[i]+j));

    printf("\nvalue of *(a[i]+j)\n");
    for(int i=0;i<4;i++)
        for(int j=0;j<2;j++)
        printf("%d,",*(a[i]+j));

    printf("\nvalue of *(*(a+i)+j)\n");
    for(int i=0;i<4;i++)
        for(int j=0;j<2;j++)
        printf("%d,",*(*(a+i)+j));
    return 0;
}
