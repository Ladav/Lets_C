
#include<stdio.h>

#define us 0
#define france 1
#define india 2
#define active france

#if active==us
char currency[]="Dollar";
#elif active==india
char currency[]="rupee";
#else
char currency[]="franc";
#endif // active

main()
{
        printf("Active currency %s",currency);
}
