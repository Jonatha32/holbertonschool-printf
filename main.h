#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(va_list a);
int print_string(va_list a);
int print_porcentaje(va_list a);
int _write_char(char c);
int print_int(va_list a);

#endif
