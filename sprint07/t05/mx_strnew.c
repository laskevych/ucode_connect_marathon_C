#include <stdio.h>
#include <stdlib.h>

char *mx_strnew(const int size) {
    char *str = (char *) malloc(sizeof(char) *size + 1);

    if (size < 0
        || !str) {
        return NULL;
    }
    
    int i = 0;
    while (i < size) {
        str[i] = '\0';
        i++;
    }
    
    return str;
}

