#include<stdio.h>

#define ted

main()
{
    #ifdef ted
    printf("hey ted..");
    #else
    printf("hey someone..");
    #endif // ted

    #ifndef teddy
    printf("\nteddy is not defined..");
    #endif // teddy
}
