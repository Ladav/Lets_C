#include<stdio.h>
main()
{
    int x=0;
    for (;x<5;x+=2){
        switch(x){
            case 2:
                switch(x){
                    case 2://printf("\ninside nested switch");
                    continue;
                }                                                                                        //continue causes next iteration to be performed immediately ever it is given
            default:printf("\ndefault case id = %d",x);                                                    //inside switch the default
        }
    }
}
