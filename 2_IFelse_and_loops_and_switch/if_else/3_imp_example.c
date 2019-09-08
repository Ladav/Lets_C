#include"stdio.h"

main()
{
    //if(1)  printf("hey...");                                                                   //parenthesis is important   it is working if and its statement in a single line
        if(0)                                                       //because no braces are used ,so the line immediately following if condition will be considered its only statement
            printf("sbfjb");                                                                        //only first statement is considered as if statement the next statement is not the part of if
            printf("hey...");                                                                       //example  printf("hey...");    is not a part of if
}
