#include <stdio.h>
#include <stdlib.h>

void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strjoin(char const *s1, char const *s2);

char *mx_concat_words(char **words) {
    if (words == NULL) {
        return NULL;
    }
    
    char *str1 = NULL;
    char *str2 = NULL;
    char *temp = NULL;
    
    int i = 0;
    while (words[i] != NULL) {
        temp = mx_strdup(words[i]);
        str2 = mx_strjoin(str1, temp);
        mx_strdel(&str1);
        
        if (!words[i + 1]) {
            str1 = mx_strdup(str2);
        }
        else {
            str1 = mx_strjoin(str2, 32);
        }

        mx_strdel(&str2);
        mx_strdel(&temp);
        i++;
    }

    return str1;
}

