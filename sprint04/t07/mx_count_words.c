int mx_count_words(const char *str, char delimiter) {
    int last = 0;
    int counter = 0;
    
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == delimiter
            && str[i - 1] != str[i]) {
            if (!counter) {
                counter = 2;
            }
            else {
                counter++;
            }
        }
        
        last = i;
        i++;
    }

    if (str[0] == delimiter) {
        counter--;
    }
    
    if (str[last] == delimiter) {
        counter--;
    }

    return counter;
}

