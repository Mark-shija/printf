#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_string - prints string on std output
 * an return number of characters printed
 * @s: a string to be printed
 * Return: Number of characters printed
 */

int print_string(va_list s)
{
	/* Implementation of print_string function */

	char *str;
	int len, i;

	str = va_arg(s, char*);
	if (str == NULL)
	{
		str = "(null)";
		len = strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
		else
		{
			len = strlen(str);
			for (i = 0; i < len; i++)
				_putchar(str[i]);
			return (len);
		}
}
