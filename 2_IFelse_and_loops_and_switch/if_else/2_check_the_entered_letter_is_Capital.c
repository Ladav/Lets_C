#include<stdio.h>

main()
{
        char ch;
        printf("Enter any letter : ");
        scanf("%c",&ch);

        if(ch>='A' && ch<='Z')
            printf("you Entered Capital %c",ch);
        else
            printf("not a capital letter.");
}

