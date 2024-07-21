#include <stdlib.h>

/**
 * get_digit - contar los digitos
 * @a: argumento
 *
 * Return: contador de digitos
 */
int get_digit(int a)
{
	int b = 0;

	if (a == 0)
	{
		return (1);
	}

	while (a != 0)
	{
		b++;
		a /= 10;
	}
	return (b);
}

/**
 * *itoa - funcion itoa
 * @n: argumento int
 * @str: string
 *
 * Return: el string
 */
char *itoa(int n, char *str)
{
	int c = get_digit(n);
	int negative = n < 0;
	int i;

	str[c] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (negative)
	{
		n = -n;
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
	}
	if (negative)
	{
		str[0] = '-';
	}
	return (str);
}
