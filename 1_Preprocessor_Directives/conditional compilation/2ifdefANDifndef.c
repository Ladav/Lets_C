#include<stdio.h>
#include<conio.h>

#define debug
#define size 20

void main()
{
    int tot=0,n,i,a[size];

    printf("Enter no. of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the value of element : ");
        scanf("%d",&a[i]);

        tot+=a[i];

        #ifdef debug
            printf("the value u have entered : %d",a[i]);
        #endif // debug
    }
    printf("\nTotal : %d",tot);
}

