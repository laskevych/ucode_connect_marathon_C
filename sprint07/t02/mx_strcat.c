#include <stdio.h>

int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2){
    char* str = s1;
    int length_1 = mx_strlen(s1);
    int length_2 = mx_strlen(s2); 
    
    if ((s1 != NULL)
        && (s2 != NULL)) {
        while (length_1--) {
            s1++;
        }

        while (length_2--) {
            *s1++ = *s2++;
        }
        *s1 = '\0';
    }

    return str;
}

