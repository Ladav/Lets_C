#include<stdio.h>
#define HLINE for ( i = 0 ; i < 79 ; i++ ) \
printf ( "%c", 196 ) ;
#define VLINE( X, Y ) {\
printf ( "%c", 179 ) ; \
}
main( )
{
int y;
for ( y = 1 ; y < 3; y++ )
    VLINE(39,y);
}
