#include <stdbool.h>

void mx_sort(int *arr, int size, bool(*f)(int, int)) {
    if (size < 1) {
        return;
    }
    
    int min;
    int j;
    int i;
    
    for (i = 0; i < size - 1; i++) {
        min = i;

        for (j = i + 1; j < size; j++) {
            if ((*f)(arr[min] , arr[j])) {
                min = j;
            }
        }
        
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

