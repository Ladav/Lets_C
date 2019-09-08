#include<stdio.h>

int hcf(int ,int);

main()
{
    int num,h;
    printf("enter how many number :");
    scanf("%d",&num);
    int a[num];

    printf("enter numbers :");
    for (int i=0;i<num;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<num-1;i++)
    {
        h=hcf(a[i],a[i+1]);
        a[i+1]=h;
    }
    printf("hcf : %d",h);
}

int hcf(int a,int b)
{
    if(a%b==0)
        return b;
    else
        return(hcf(b,a%b));
}
