#include<stdio.h>
main()
{
    int arr1[] = {1, 2};
    memset(arr1, 0, 2 * sizeof( int));      // it set the arr1 to 0 zero "byte by byte" not integer by integer ,try commented code
    //memset(arr1, 1, 2 * sizeof( int));      //16843009 ->00000001 00000001 00000001 00000001 (function set each byte to 0)
    printf("%d %d\n", arr1[0], arr1[1] );
}
