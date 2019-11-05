#include<stdio.h>
#include<conio.h>

#define debug 1

void main()
{
    #if debug
        printf("Debugging...");
    #endif // debug
    printf("\nRunning...");
}
