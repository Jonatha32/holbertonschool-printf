#include "main.h"
/**
 *
 *
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i, printed = 0;
	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 's':
					printed += print_string(va_arg(arg, char *));
					break;
				case 'c':
					printed += print_char(va_arg(arg, int));
					break;
				case 'd':
					printed += print_number(va_arg(arg, int));
					break;
				case '%':
					break;
				default:
					write(1, format, 1);
					printed++;
					break;
			}
		}
	}
	return (printed);
}
