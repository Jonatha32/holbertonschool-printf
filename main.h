#ifndef main
#define main

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(va_list a);
int print_string(va_list a);
int print_porcentaje(va_list a);
int _write_char(char c);

#endif
