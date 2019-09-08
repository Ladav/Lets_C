#include<stdio.h>
int l_search(int *,int,int);
int main(void)
{
    int a[]={12,24,45,67,77,78};
    int num,pos;
    printf("---list of elements---\n");
    for(int i=0 ; i<sizeof(a)/4 ; i++)
        printf("%d\t",a[i]);

    printf("\nEnter element :");
    scanf("%d",&num);

    pos=l_search(a,num,sizeof(a)/4);
    if(pos==-1)
        printf("\nElement not found!");
    else
        printf("%d present at position %d",num,pos);

    return 0;
}
int l_search(int *A,int n,int size)
{
    int beg=0,mid,end=size;
    while(beg<end)
    {
        mid = (beg+end)/2;
        if(A[mid]==n)
            return mid;
        else if(A[mid]>n)
            end=mid;
        else
            beg=mid;
    }
    return -1;
}
