#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "itoa.h"
/**
 * print_int - funcion para imprimir enteros
 * @a: argumento
 *
 * Return: numero de caracteres impresos
 */

int print_int(va_list a)
{
	int n = va_arg(a, int);
	int l = get_digit(n);

	char *b = (char *)malloc(l + 2);

	char *s = b;
	int i = 0;

	if (b == NULL)
		return (-1);
	itoa(n, b);

	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
		i++;
	}
	free(b);
	return (i);
}
