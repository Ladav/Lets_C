#include<stdio.h>

main()
{
    int i=0;
    // for(i++;i<2;i=0) printf("%d\n",i); working fine
   // for(i++;i<2;i=0) printf("%d\n",i); working but no output
   // for(i++;i=0;i<3) printf("%d\n",i); working but no output
   // for(i<2;i++;i=0) printf("%d\n",i); working but no output
}
