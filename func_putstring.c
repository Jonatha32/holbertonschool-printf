#include "main.h"

int print_string(char *string)
{
	int char_count = 0;
	const char *p;

	for (p = string; *p != '\0'; p++)
	{
		write(1, p, 1);
		char_count++;
	}

	write(1, "\n", 1);
	return char_count;
}
