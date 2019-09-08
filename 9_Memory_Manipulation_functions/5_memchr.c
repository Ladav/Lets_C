#include<stdio.h>
main()
{
    int arr1[]={ 1, 2};                 // 0 0 0 1, 0 0 0 2
    if ((memchr( arr1, 1, 2 * sizeof(int))) != NULL)         //returns a pointer to the byte (ex-1 in arr1) if found ,otherwise null pointer will be returned
        printf("byte found");
    else
        printf("byte not found");
}
