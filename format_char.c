#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_char - print a character to std out
 * @c: a character to be printed
 * Return: on success return 1
 */

int print_char(va_list c)
{
	char txt;

	txt = va_arg(c, int);

	_putchar(txt);

	return (1);
}

/*
 * print_perctg - prints a character % on std out
 * Return: 1
 */

int print_perctg(void)
{
	_putchar('%');

	return (1);
}
