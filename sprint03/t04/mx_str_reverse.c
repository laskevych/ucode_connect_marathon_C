int mx_strlen(const char *s);
void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *s) {
    int iteration = 0;
    int length = mx_strlen(s) - 1;

    if (length <= 0) {
        return;
    }

    while (iteration < length) {
        mx_swap_char(&s[iteration], &s[length]);
        
        iteration++;
        length--;
    }
}

