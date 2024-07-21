#include "main.h"
#include <stdarg.h>
/**
 * _printf - printf by jona and fabri
 * @format: format
 *
 * Return: b
 */
int _printf(const char *format, ...)
{
	va_list a;
	int i;
	int b = 0;

	va_start(a, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				va_end(a);
				return (-1);
			switch (format[i])
			{
				case 'c':
					b += print_char(a);
					break;
				case 's':
					b += print_string(a);
					break;
				case '%':
					b += print_porcentaje(a);
					break;
				case 'i':
				case 'd':
					b += print_int(a);
					break;
				default:
					b += _write_char('%');
					b += _write_char(format[i]);
			}
		}
		else
		{
			b += _write_char(format[i]);
		}
	}
	va_end(a);
	return (b);
}
