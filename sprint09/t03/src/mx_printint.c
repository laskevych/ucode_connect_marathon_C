#include "../inc/header.h"

void mx_printint(int n) {
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

