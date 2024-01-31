#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/*
 * print_string - prints string on std output
 * an return number of characters printed
 * @s: a string to be printed
 * Return: Number of characters printed
 */

int print_string(va_list s)
{
	/* Implementation of print_string function */

	int count = 0;
	
	char *str = va_arg(s, char*);

	while (*str)
	{
		write(1, str, 1);
		count++;
		str++;
	}

	return (count);
}
