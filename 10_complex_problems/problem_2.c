/****
 2) The Least-Recently-Used(LRU) cache algorithm exists the element from the cache(when it's full) that was least-recently-used. After an element is requested from the cache, it should be added to the cache(if not already there) and considered the most-recently-used element in the cache.
Given the maximum size of the cache and a list of integers(to request from the cache), calculate the number of cache misses using the LRU cache algorithm. A cache miss occur when the requested integer does not exist in the cache.
Initially, the cache is empty.
The input to the function LruCountMiss shall consist of an integer max_cache_size,  an array pages and its length len.
The function should return an integer for the number of cache misses using the LRU cache algorithm.
Assume that the array pages always has pages numbered from 1 to 50.
TESTCASES:
TESTCASE1:
INPUT:
3,[7,0,1,2,0,3,0,4,2,3,0,3,2,1,2,0],16
EXPECTED RETURN VALUE:
11
TESTCASE 2:
INPUT:
2,[2,3,1,3,2,1,4,3,2],9
EXPECTED RETURN VALUE:
8
EXPLANATION:
The following page numbers are missed one after the other 2,3,1,2,1,4,3,2.This results in 8 page misses.
*/

#include<stdio.h>
#include<conio.h>

int LruCountMiss(int, int*, int); //cache size, input array , array size/length

void main() {
    int len = 16;
    int input[16] = {7,0,1,2,0,3,0,4,2,3,0,3,2,1,2,0};
    int max_cache_size, pageFaults;

    max_cache_size = 3;

    pageFaults = LruCountMiss(max_cache_size, input, len);
    printf("total page faults: %d",pageFaults);
}

int LruCountMiss(int cacheSize, int* input, int len) {
    int cache[cacheSize], frame;    // frame === current element/input
    int lastUsed[cacheSize], distance, pageFaults = 0;
    //initializing all elements to 0
    for(int i = 0; i < cacheSize; i++) {
        cache[i] = -1;
    }
    
    for(int i = 0; i < len; i++) {
        frame = input[i];
        // check if there are free space available or frame already present in the cache
        for(int j = 0; j < cacheSize; j++) {
            if(cache[j] == -1) {
                pageFaults++;
                cache[j] = frame;
                break;
            }
            if(cache[j] == frame) {
                break;
            }
        }

        // check least recently used and replace it 
        for(int x = 0; x < cacheSize; x++) { // match each frame
            distance = 0;
            for(int j = i; j > 0; j--) { // check all the priviously used input
                distance++;
                if(cache[x] == input[j]) {
                    lastUsed[x] = distance;
                    break;
                }
            }
        }

        if(lastUsed[0] > lastUsed[1] || lastUsed[0] > lastUsed[2]) {
                cache[0] = frame;
        }
        if(lastUsed[1] > lastUsed[0] || lastUsed[1] > lastUsed[2]) {
                cache[1] = frame;
        }
        if(lastUsed[2] > lastUsed[0] || lastUsed[2] > lastUsed[1]) {
                cache[2] = frame;
        }
        pageFaults++;
    }

    return pageFaults;
}