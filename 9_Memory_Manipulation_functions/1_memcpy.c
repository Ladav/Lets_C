#include<stdio.h>
main()
{
    int arr1[] = {1, 2};
    int arr2[] = {2, 3};
    memcpy(arr1, arr2, 2 * sizeof( int));       //it copies the content of arr2 into arr1 byte by byte (int takes 4 bytes in windows/linux)
    printf("%d %d", arr1[0], arr1[1] );
}
