#include "main.h"

/**
 * _printf - Custom printf function
 * @format: format string
 * Return: int with the format string character count
 */

int _printf(const char *format, ...)
{
	int char_count = 0;
	const char *p;
	va_list args;

	va_start(args, format);

	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			p++;

			switch (*p)
			{
				case '%':
					handle_percent(&char_count);
					break;
				case 'c':
					handle_char(args, &char_count);
					break;
				case 's':
					handle_string(args, &char_count);
					break;
				default:
					write(1, "%", 1);
					write(1, p, 1);
					char_count += 2;
					break;
			}
		}
		else
		{
			write(1, p, 1);
			char_count++;
		}

	}

	va_end(args);
	return (char_count);
}
