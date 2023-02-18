#include "../inc/header.h"

void print_matrix_rain(bool creative_flag) {
    if (creative_flag
        && !print_matrix_message()) {
        return;
    }

    int x;
    int y;

    getmaxyx(stdscr, y, x);
    x /= 2;
    wchar_t arr[x][y];

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            arr[i][j] = ' ';
        }
    }

    int speed = 100000;
    for (int iterations = 0;; iterations++) {
        clear();
        for (int i = 0; i < x; i++) {
            next_row(arr[i], y);
            fill_columns(arr[i]);
            print_column(arr[i], y, i, creative_flag);
        }
        usleep(speed);
        refresh();
        
        nodelay(stdscr, TRUE);

        char ch = getch();
        if (ch == 'q') {
             break;
        }
        else if (ch == 'a') {
            speed = speed - 10000;
        }
        else if (ch == 'z' && speed < 5000000) {
            speed = speed + 10000;
        }
    }
}



