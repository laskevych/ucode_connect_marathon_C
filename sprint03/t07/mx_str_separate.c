void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == delim) {
            while (str[i] == delim) {
                i++;
            }
            mx_printchar('\n');
        }

        mx_printchar(str[i]);
        i++;
    }
}

