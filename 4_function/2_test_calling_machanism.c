#include"stdio.h"
//function call cycle makes it an indefinite program
main()
{
    printf("before fu\n");
    fu();
    printf("after fu\n");
}
fu()
{
    printf("inside fu\n");
    wtf();
}
wtf()
{
    printf("inside wtf\n");
    main();
}
