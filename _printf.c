#include "main.h"
#include <stdarg.h>
/**
 * _printf - printf by jona and fabri
 * @format: format
 *
 * Return: b
 */
int _printf(const char *format, ...)
{
	va_list a;
	int i;
	int b = 0;

	va_start(a, format);
	for (i = 0; format[i] != '\0'; i++) //recorremos format
	{
		if (format[i] == '%') //si es %
		{
			i++; //mover al siguiente para identificar formato
			if (format[i] == '\0')
			{
				va_end(a);
				return (-1);
			}
			switch (format[i])
			{
				case 'c': //si es un caracter
					b += print_char(a); //llamar a print_char y actualizar b
					break;
				case 's': //si es un string
					b += print_string(a); //llamar a print_string y actualizar b
					break;
				case '%': //si es %
					b += print_porcentaje(a);
					break;
				case 'i': //si es entero
				case 'd':
					b += print_int(a); //llamar a print_int y actualizar b
					break;
				default: //si no es ninguno de los anteriores
					b += _write_char('%'); //imprime %
					b += _write_char(format[i]); //imprime el caracter
			}
		}
		else //si no es un porcentaje
			b += _write_char(format[i]); //imprime cualquier otro de los caracteres
	}
	va_end(a);
	return (b);
}
