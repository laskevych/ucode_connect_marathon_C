#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printint(int n);
void mx_printchar(char c);
int mx_atoi(const char *str);

int main(int argc, char *argv[]) {
    int sum = 0;

    if (argc < 2) {
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        int to_convert = 1;
        int marker = 0;
        int num = 0;

        for (int j = 0; argv[i][j] != '\0'; j++) {
            if (argv[i][j] == '-' && !j) {
                marker = 1;
                continue;
            }
            
            if (argv[i][j] == '+' && !j) {
                marker = 0;
                continue;
            }
            
            if (!mx_isdigit(argv[i][j])) {
                to_convert = 0;
                break;
            }

            num = 10 * num + (int)argv[i][j] - 48;
        }

        if (to_convert == 1) {
            if (!marker) {
                sum += num;
            }
            else {
                sum -= num;
            }
        }
    }
    
    mx_printint(sum);
    mx_printchar('\n');

    return 0;
}

