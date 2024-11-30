#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
void handle_percent(int *);
void handle_char(va_list, int *);

int print_char(int);
int print_string(char *);
int print_percent(int p);
int print_number(int n);

#endif
