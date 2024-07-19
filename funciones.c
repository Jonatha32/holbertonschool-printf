#include "main.h"

int print_char(va_list a)
{
  char c = va_arg(a, int);
  return (_write_char(c));
}

int print_string(va_list a)
{
  char *str = va_arg(a, char *);
  int i = 0;

  if (str == NULL)
    str = "(NULL)";
  while (str[i] != '\0')
  {
    _write_char(str[i]);
    i++;
  }
  return (i);
}

int print_porcentaje(va_list a)
{
  (void)a;
  return _write_char('%');
}

int _write_char(char c)
{
  return write(1, &c, 1);
}
