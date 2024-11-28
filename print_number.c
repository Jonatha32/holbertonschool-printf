#include <stdlib.h>
#include <unistd.h>

/**
 * integer_to_ascci - function
 * @num: parameter
 * Return: str
 */

char *integer_to_ascci(int num)
{
	int len = 0, a = num, i;
	char *str;

	if (num == 0) /*si es 0, solo se imprime 0 y null*/
	{
		str = malloc(2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}

	while (a != 0) /*cuenta los digitos*/
	{
		a /= 10;
		len++;
	}

	if (num < 0) /*maneja el negativo*/
	{
		len++;
	}

	str = malloc(len + 1); /*se asigna memoria para len + 1 (por el null)*/
	str[len] = '\0';

	if (num < 0) /*se tratan los negativos, agregandole un '-' al comienzo*/
	{
		str[0] = '-';
		num = -num;
	}

	for (i = len - 1; i > 0; i--) /*se imprimen los numeros*/
	{
		str[i] = (num % 10) + '0'; /*i representa el ultimo digito de num, este se pasa a ASCCI*/
		num /= 10; /*se divide el numero entre 10*/
	}

	return (str);
}

/**
 * print_number - function
 * @n: parameter
 * Return: len
 */

int print_number(int n)
{
	char *str = integer_to_ascci(n); /*llama a la funcion para que transforme 'n' en string*/
	int len = 0;

	while (str[len] != '\0') /*se recorre la cadena y se imprime char por char*/
	{
		write(1, &str[len], 1);
		len++;
	}

	free(str);
	return (len);
}
