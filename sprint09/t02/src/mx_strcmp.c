#include "../inc/header.h"

int mx_strcmp(const char *s1, const char *s2) {
    int i = 0;
    int char_code = 0;

    while (s1[i] == s2[i]) {
        if (s2[i] == '\0'
            && s1[i] == '\0') {
            return char_code;
        }

        i++;
    }

    char_code = s1[i] - s2[i];
    
    return char_code;
}

