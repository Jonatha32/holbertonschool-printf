#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(int);
int print_string(char *);
int print_percent(int p);
int print_number(int n);

#endif
