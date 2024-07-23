#include <limits.h>
#include <stdlib.h>
/**
 * get_digit - contar los digitos
 * @a: argumento
 *
 * Return: contador de digitos
 */
int get_digit(int a)
{
	int b = 0; //contador de digitos

	if (a == 0) //si a es 0, devolvemos 1, porque el numero 0 es un solo digito
	{
		return (1);
	}

	while (a != 0) //mientras a sea diferente a 0
	{
		b++; //sumamos 1 al contador
		a /= 10; //dividimos a entre 10 para pasar al siguiente digito
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
	unsigned int num;

	if (negative)
	{
		num = -n;
		c++;
	}
	else
		num = n;

	str[c] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}

	for (i = c - 1; i >= 0; i--)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
		if (num == 0 && negative)
		{
			str[0] = '-';
			break;
		}
	}
	return (str);
}
