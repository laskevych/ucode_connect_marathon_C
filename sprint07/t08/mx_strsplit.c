#include <stdio.h>
#include <stdlib.h>

void mx_strdel(char **str);
char *mx_strnew(const int size);
int mx_count_words(const char *str, char delimiter);
char *mx_strncpy(char *dst, const char *src, int len);

static void mx_string2array(char const *s, char c, char **array) {
    int length = 0;
    int array_index = 0;
    int j = 0;
    int i = 0;

    while (s[i] != '\0') {
        if (!length
            && s[i] != c) {
            array_index = i;
        }
        
        if (s[i] != 0
            && s[i] != c) {
            length++;
        }
        
        if ((s[i+1] == 0
            || s[i+1] == c) 
            && length > 0) {
            array[j] = mx_strnew(length);
            array[j] = mx_strncpy(array[j], &(s[array_index]), length);
            length = 0;
            j++;
        }

        i++;
    }
    
    array[j] = NULL;
}

char **mx_strsplit(char const *s, char c) {
    if (s == NULL
        || !c) {
        return NULL;
    }
    
    char **array = NULL;
    array = (char **) malloc(sizeof(char *) * (mx_count_words(s, c) + 1));
    
    mx_string2array(s, c, array);
    return array;
}

