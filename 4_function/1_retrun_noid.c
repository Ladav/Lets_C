#include<stdio.h>

// the function is return void , we can return any valid value ex-not keywords or any undefined variable

void f(){
    printf("inside function.\n");
    //return NULL;
    //return 0;
    //return;
    return 1000000000000000000000000000000000000;
    }

main()
{
    f();
    printf("inside main.");
}
