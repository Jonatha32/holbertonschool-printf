#include <unistd.h>
/**
 * print_char - print a char
 * @c: parameter
 * Return: char
 */
int print_char(char c)
{
	return(write(1, &c, 1));
}
