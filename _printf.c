#include "main.h"
#include <stdarg.h>

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

					break;

				case 'c':
					printed += print_char(va_arg(arg, int));
					break;

				case 'd':

					break;

				case '%':

					break;

				default:

					break;
			}
		}
	}
	return (printed);
}
