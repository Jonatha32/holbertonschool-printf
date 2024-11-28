#include "main.h"

/**
 *
 *
 */

int _printf(const char *format, ...)
{
	int char_count = 0;
	const char *p;

	if (format == NULL)
		return -1;

	for (p = format; *p != '\0'; p++)
	{
		write(1, p, 1);
		char_count++;
	}

	write(1, "\n", 1);
	return (char_count);
}
