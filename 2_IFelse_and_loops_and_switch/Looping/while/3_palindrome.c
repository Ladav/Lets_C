#include<stdio.h>

main()
{
    int rev=0,rem,temp,num;
    printf("Enter any positive number: ");
    scanf("%d",&num);

    temp=num;
     while(temp>0)
     {
        rem=temp%10;
        temp=temp/10;
        rev=(rev*10)+rem;
     }

     printf("the reverse of %d is %d",num,rev);

     if(num==rev) printf("\nthe number is a palindrome.\n");
     else printf("\nnumber is not a palindrome.\n");
}
