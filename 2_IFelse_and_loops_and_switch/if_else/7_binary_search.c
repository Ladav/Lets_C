#include<stdio.h>

main()
{
    int x=6; //value to be found
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int mid ,beg=0 ,end;
    end=(sizeof(a)/sizeof(int));
    //printf("%d",end);
while(beg<end){
    mid=(beg+end)/2;
    if(mid>x){
        end=mid-1;
    }
    else if (mid<x){
        beg =mid+1;
    }
    else{
        printf("match found..");
        break;
    }
}
if(mid!=x){
    printf("no. not found..");
}
}
