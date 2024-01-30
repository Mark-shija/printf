#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/*
 * print_string - prints string
 * @s: a string to be printed
 * Return: Number of characters printed
 */

int print_string(va_list)
{
	int i;
	char *str;

	str = va_arg(s, char*);

	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		_putchar(str[i]);

		i++;
	}

	return (1);
}
