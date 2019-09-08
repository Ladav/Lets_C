#include"stdio.h"

main()
{
    for(int j=0;j<2;j++){
    for(int i=0;i<3;i+=2){
        printf("hey");
        if(i==1) continue;
    }
     //  if(j==3) break;
    }
}
