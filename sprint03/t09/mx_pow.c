double mx_pow(double n, unsigned int pow) {
    double result = 1;

    if (pow == 0) {
        return result;
    }

    while (pow != 0) {
        result = result * n;
        pow--;
    }

    return result;
}

