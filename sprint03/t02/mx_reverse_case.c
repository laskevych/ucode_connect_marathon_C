#include <unistd.h>
#include <stdbool.h>

int mx_tolower(int c);
int mx_toupper(int c);
bool mx_isupper(int c);
bool mx_islower(int c);

void mx_reverse_case(char *s) {
    int iteration = 0;

    while(s[iteration] != '\0') {
        if (mx_islower(s[iteration])) {
            s[iteration] = mx_toupper(s[iteration]);
        }
        else if(mx_isupper(s[iteration])) {
            s[iteration] = mx_tolower(s[iteration]);
        }

        iteration++;
    }
}

