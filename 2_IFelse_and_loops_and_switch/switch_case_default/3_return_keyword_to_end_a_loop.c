#include<stdio.h>

main()
{
    int x=2;
    for(;;)
    switch (2){
            case 2:
                    switch(x)
                    {
                    case 2:
                                switch (x)
                                {
                                    case 2:
                                    printf("hey ");
                                    //break;                      // in nested switch behave differently
                                    //or
                                    return;
                                }
                    default:
                        printf("\nhello from the other side.");
                    }
        default:printf("\nthats cool..");
    }

    printf("inside main");
}

