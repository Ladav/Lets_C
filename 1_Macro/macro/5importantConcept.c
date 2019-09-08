#include<stdio.h>
#include<conio.h>

#define TEMPO(x,y) x*y

void main()
{
    int pro=0;

    pro=TEMPO(4+8,9-6);
    printf("%d",pro);
}
// it look like the calculation are running like
//  4+8->12 and 9-6->3
// pro =12*3=36
// but it is not the case with macros , macros just place the text as it is given so correct answer is
// 4+8*9-6
// 4+72-6
// 70

//but if you parentheses ex -> TEMPO((4+8),(9-6)) then answer will be 36
