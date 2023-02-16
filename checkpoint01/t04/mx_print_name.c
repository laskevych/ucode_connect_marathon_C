#include <unistd.h>

static int mx_strlen(const char *s) {
    int i = 0;

    while (s[i]) {
        i++;
    }

    return i;
}

static void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}

static void mx_printchar(char c) {
    write(1, &c, 1);
}

static void mx_printint(int s) {
    char data[102];
    long number = n;
    int i = 0;

    if (number == 0) {
        mx_printchar(n + '0');
    }

    if (number < 0) {
        number *= -1;
        mx_printchar('-');
    }

    while (number != 0) {
        data[i++] = (number % 10) + '0';
        number = number / 10;
    }

    for (int j = i - 1; j >= 0; j--) {
        mx_printchar(data[j]);
    }
}

int main(int argc, char *argv[]) {
    mx_printstr(argv[0]);
    mx_printchar(10);
    mx_printint(argc);
    mx_printchar(10);

    return 0;
}

