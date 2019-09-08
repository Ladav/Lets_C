#include<stdio.h>
main()
{
    int arr1[] = {1, 2};
    int arr2[] = {2, 3};
    memmove(arr1, arr2, 2 * sizeof( int));       //it moves the content of arr2 into arr1 byte by byte (int takes 4 bytes in windows/linux)
    printf("%d %d\n", arr1[0], arr1[1] );
    printf("%d %d", arr2[0], arr2[1] );             // so it does not destroy the content of the source array
}
