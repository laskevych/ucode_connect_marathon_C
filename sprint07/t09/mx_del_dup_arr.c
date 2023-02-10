#include <stdio.h>
#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size) {
    if (src == NULL
        || src_size == NULL
        || dst_size == NULL) {
        return NULL;
    }

    for (int i = 0; i < src_size; i++) {
        for (int j = i + 1; j < src_size ; j++) {
            if (src[j] != src[i]) {
                continue;
            }

            for (int n = j; n < src_size - 1; n++) {
                src[n] = src[n + 1];
            }
                
            src_size -= 1;

            if (src[j] == src[i]) {
                j--;
            }
        }
    }
        
    *dst_size = src_size;
    
    int *array = NULL;
    array = (int*) malloc(*dst_size);
    array = mx_copy_int_arr(src, *dst_size);
    
    return array;
}

