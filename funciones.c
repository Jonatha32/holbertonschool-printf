#include "main.h"
/**
 * _write_char - usa write para imprimir el caracter
 * @c: caracter
 *
 * Return: devuolver el numero de caracteres
 */
int _write_char(char c)
{
	return (write(1, &c, 1)); //usar la funcion write para imprimir el caracter y devolver el numero de caracteres impresos
}

/**
 * print_char - funcion para %c
 * @a: argumento
 *
 * Return: write_char
 */
int print_char(va_list a)
{
	char c = va_arg(a, int); //conseguir el siguiente argumento de tipo caracter

	return (_write_char(c)); //llamar _write_char para imprimir y devolver el numero de caracteres impresos
}

/**
 * print_string - funcion para %s
 * @a: argumento
 *
 * Return: i
 */
int print_string(va_list a)
{
	char *str = va_arg(a, char *); //obtengo el siguiente argumento que sea cadena
	int i = 0;

	if (str == NULL) //si la cadena es NULL
	str = "(null)"; //imprime "(Nnull)"
	while (str[i] != '\0') //recorre cada caracter de la cadena
	{
		_write_char(str[i]); //imprime el caracter
		i++;
	}
	return (i); //devolver el numero total de caracteres impresos
}

/**
 * print_porcentaje - funcion para %%
 * @a: argumento
 *
 * Return: write_char %
 */
int print_porcentaje(va_list a)
{
	(void)a;
	return (_write_char('%')); //imprime % y devuelve el numero de caracteres impresos
}
