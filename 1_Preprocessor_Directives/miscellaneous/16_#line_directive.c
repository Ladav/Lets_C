#include<stdio.h>
#include "conio.h"

#line 100
                                                                                                                //100
main()                                                                                                     //101
{
//    printf("abcd...");                                                                              //103
    int x=__LINE__;                                                                                     //104
    printf("Compiler is executing line no. %d  of the source file named %s",(x+1),__FILE__);                            //105
}
