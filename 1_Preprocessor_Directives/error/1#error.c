#include"stdio.h"

main()
{
    float n=9;
    printf("Enter value of divisor.");
    scanf("%f",&n);
    #ifdef n
        #error zero_cant_be
    #endif // n
}
