#include<stdio.h>

main()
{
    int arr1[] = {1, 2};            // 0 0 0 1, 0 0 0 2     ->every integer is made up of a byte and byte by byte cmp is done
    int arr2[] = {1, 2};
    if((memcmp(arr1, arr2, 2 * sizeof( int)))==0)                    //return values as strcmp do
        printf("they match!");
    else
        printf("match  not found!");
/*
    int arr1[] = {1, 2};            // 0 0 0 1, 0 0 0 2     ->every integer is made up of a byte and byte by byte cmp is done
    short int arr2[] = {1, 2};      // 0 1, 0 2
    if((memcmp(arr1, arr2, 2 * sizeof( int)))==0)                    //return values as strcmp do
        printf("they match!");
    else
        printf("match  not found!");
*/
}
