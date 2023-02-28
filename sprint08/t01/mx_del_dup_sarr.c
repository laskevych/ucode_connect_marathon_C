#include "duplicate.h"

t_intarr *mx_del_dup_sarr(t_intarr *src) {
    if (src->arr == NULL) {
        return NULL;
    }

    t_intarr temp_array;
    temp_array.size = src->size;
    temp_array.arr = (int *) malloc(sizeof(int) * temp_array.size);
    
    if (temp_array.arr == NULL) {
        return NULL;
    }
    
    int new_size = 0;
    
    for (int i = 0; i < src->size; i++) {
        int marker = 0;
        
        for (int j = 0; j < i; j++) {
            if(src->arr[i] == src->arr[j]) {
                marker = 1;
            }
        }
        
        if (marker == 0) {
            temp_array.arr[new_size] = src->arr[i];
            new_size++;
        }
    }
    
    t_intarr *result = (t_intarr *) malloc(sizeof(t_intarr*));
    result->size = new_size;
    result->arr = mx_copy_int_arr(temp_array.arr, result->size);
    free(temp_array.arr);
    
    return result;
}

