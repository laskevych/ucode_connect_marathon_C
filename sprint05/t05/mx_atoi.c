#include <stdbool.h>

bool mx_isspace(char c);
bool mx_isdigit(int c);

int mx_atoi(const char *str) {
    int start = -1;
    int end = -1;
    int result = 0;
    int sign = 1;

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == 45
            && mx_isdigit(str[i + 1])) {
            sign = -1;
            i++;
            continue;
        }
        
        if (!mx_isspace(str[i])
            && start == -1) {
            start = i;
        }
        
        if (start > -1
            && !mx_isdigit(str[i])
            && end == -1) {
            end = i;
        }
        
        i++;
    }

    if (end == -1) {
        for (int i = start; str[i] != '\0'; i++) {
            result = (result * 10) + (int)str[i] - 48;
        }
    } else {
        for (int i = start; i < end; i++) {
            result = (result * 10) + (int)str[i] - 48;
        }
    }

    
    return result * sign;
}

