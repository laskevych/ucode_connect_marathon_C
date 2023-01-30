#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num) {
    int original_num = num;
    int sum = 0;
    int digit = 0;

    while (num != 0) {
        digit++;
        num /= 10;
    }

    num = original_num;
    while (num != 0) {
        sum += mx_pow(num % 10, digit);
        num /= 10;
    }

    return sum == original_num;
}

