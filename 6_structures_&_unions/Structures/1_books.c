#include<stdio.h>
main()
{
    struct book
    {
        int pages;
        float price;
        char name[8];
    };

    struct book b1,b2,b3;

    printf("\nEnter names, prices & no. of pages of 3 books :\n" ) ;
    scanf("%s %f %d",&b1.name,&b1.price,&b1.pages);
   // scanf("%s %f %d",&b2.name,&b2.price,&b2.pages);
   // scanf("%s %f %d",&b3.name,&b3.price,&b3.pages);

    printf ( "\nAnd this is what you entered :" ) ;
    printf ( "\n%s \t %0.2f \t %d", b1.name, b1.price, b1.pages ) ;
   // printf ( "\n%s \t %0.2f \t %d", b2.name, b2.price, b2.pages ) ;
   // printf ( "\n%s \t %0.2f \t %d", b3.name, b3.price, b3.pages ) ;

}
