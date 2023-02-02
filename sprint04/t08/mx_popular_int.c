int mx_popular_int(const int *arr, int size) {
    int popular_int = 0;
    int current_popular_int;
    int count = 1;

    for (int i = 0; i < size; i++) {
        current_popular_int = 0;
        
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                current_popular_int++;
            }
        }
        
        if (current_popular_int > count) {
            popular_int = arr[i];
            count = current_popular_int;
        }
    }
    
    return popular_int;
}

