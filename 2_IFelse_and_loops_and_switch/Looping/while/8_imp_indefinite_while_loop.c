#include<stdio.h>
/*this works in truboc the loop this is a indefinite loop because a int ranges from 0 to 32767 and in the loop after the last execution the the value of i
supposed to 32768  but because of c compilers internal functioning after positive range end the compiler start with negative end this cycle goes on
in our case the after 32767 the next value in -32768 which satisfy the condition and making it a infinite loop*/
main()
{
    int i=0;
    while(i<32767){
        printf("%d \n",i);
        i++;
    }
}
