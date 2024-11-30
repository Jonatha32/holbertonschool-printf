#include "main.h"

/*
 * handle_char - handle char arguments
 * @arg: argument
 * @char_count: pointer
 */

void handle_char(va_list args, int *char_count)
{
	char c = va_arg(args, int);
	write(1, &c, 1);
	(*char_count)++;
}
