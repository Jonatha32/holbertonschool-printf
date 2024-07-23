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
	int n = va_arg(a, int); //obtengo el entero de la lista de argumentos
	int l = get_digit(n); //contamos los digitos del numero
	char *b = (char *)malloc(l + 2); //1 para el signo y otro para el '\0'
	char *s;
	int i = 0;

	if (b == NULL)
		return (-1);
	itoa(n, b); //convertimos el entero a cadena
	s = b;

	while (*s != '\0')
	{
		write(1, s, 1); //usamos write para imprimir cada caracter
		s++;
		i++;
	}
	free(b);
	return (i);
}
