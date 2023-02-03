void mx_sort_arr_int(int *arr, int size) {
    int swap_number;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[j] > arr[j + 1]) {
                swap_number = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap_number;
            }
        }
    }
}

