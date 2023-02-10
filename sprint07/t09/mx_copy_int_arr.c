#include <stdio.h>
#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size) {
    int *dst = NULL;

    if (size < 0
        || src == NULL) {
        return NULL;
    }
    
    dst = (int *) malloc(size * sizeof(int));
    
    int i = 0;
    while (i < size) {
        dst[i] = src[i];
        i++;
    }
    
    return dst;
}

