#include<stdio.h>

main()
{
    int x=2;
    while(1)
    switch(x)
    {
    case 1:                                             // multiple cases for a single statement here c things like  "case 1 to 5:" are not allowed ,but in java they do
    case 2:
    case 3:
    case 4:
        printf("hey ");
        break;
    }
}
