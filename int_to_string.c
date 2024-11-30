#include "main.h"

/**
 * int_to_string - convert int to string
 * @num: number
 * @buffer: buffer
 */

void int_to_string(int num, char *buffer)
{
	int is_negative = 0;
	int i = 0;

	if (num == 0)
	{
		buffer[i++] = '0';
		buffer[i] = '\0';
		return;
	}

	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}

	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	if (is_negative)
	{
		buffer[i++] = '-';
	}

	buffer[i] = '\0';

	reverse_string(buffer);
}

/**
 * reverse_string - reverse a given string
 * @str: string to reverse
 */

void reverse_string(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}
