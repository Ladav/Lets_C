#include<stdio.h>

int main(void)
{
    int *p;
    p=0;           //assigning the pointer to 0 or null  now pointer is pointing to zero
    *p=1000;        // forcefully changing the value of 0 or null, which results into crash
    printf("\nNever got printed.");
    return 0;
}
