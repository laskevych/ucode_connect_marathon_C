#include <unistd.h>

void mx_only_printable(void) {
    for (char c_number = 126; c_number > 31; c_number --) {
        write(1, &c_number, 1);
    }

    write(1, "\n", 1);
}

