#ifndef HEADER
#define HEADER

#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <ncurses.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

wchar_t get_symbol();

int mx_strlen(const char *c);
void mx_printerr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
bool get_creative_flag(int argc, char *argv[]);
bool print_matrix_message();
void print_matrix_rain(bool creative_flag);
void set_color(int color);
void next_row(wchar_t *arr, int rows);
void fill_columns(wchar_t *arr);
void print_column(wchar_t *col, int rows, int x, bool is_creative);

#endif

