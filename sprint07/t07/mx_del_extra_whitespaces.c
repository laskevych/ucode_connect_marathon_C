#include <stdbool.h>
#include <stdio.h>

bool mx_isspace(char c);
void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str);
char *mx_strncpy(char *dst, const char *src, int len);

char *mx_del_extra_whitespaces(const char *str) {
    if (str == NULL) {
        return NULL;
    }

    int count = 0;
    bool is_space = false;

    int i = 0;
    while (i < mx_strlen(str)) {
        if (mx_isspace(str[i])
            && !is_space) {
            count++;
            is_space = true;
        }
        else if (!mx_isspace(str[i])) {
            count++;
            is_space = false;
        }

        i++;
    }

    if (count < 1) {
        return NULL;
    }

    char *result = mx_strnew(count);

    if (mx_isspace(result[0])
        && mx_strlen(result) == 1) {
        mx_strdel(&result);
        return NULL;
    }

    is_space = false;
    for (int i = 0, j = 0; i < mx_strlen(str); i++) {
        if (mx_isspace(str[i])
                  && is_space == false) {
            result[j] = ' ';
            is_space = true;
            j++;
        }
        else if (!mx_isspace(str[i])) {
            result[j] = str[i];
            is_space = false;
            j++;
        }
    }

    return mx_strtrim(result);
}

