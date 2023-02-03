void mx_str_reverse(char *s) {
    int iteration = 0;
    int length = 0;
    char str = s[iteration];

    while (str != 0) {
        iteration++;
        str = s[iteration];
    }

    for (int j = 0; j < length / 2; j++) {
        char t = s[j];
        s[j] = s[length - j - 1];
        s[length - j - 1] = t;
    }
}

int main(){}

