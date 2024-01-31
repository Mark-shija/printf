#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * find_func - finds the format printing function
 * triggers the printing function
 * @format: character to be printed on std out
 * Return: always 1 on success
 */
int (*find_func(const char *format))(va_list)
{
	/* Implementation of find_func function */

	unsigned int i = 0;
	text_f choose_f[] = {
		{"c", print_char},
		{"s", print_string},
		/*
		*{"i", print_int},
		*{"d", print_decimal},
		*{"b", print_binary},
		*{"o", print_octadec},
		*{"x", print_hexadec_x},
		*{"X", print_hexadec_X},
		*/
		{NULL, NULL}
	};

	while (choose_f[i].identify[0] == (*format))
	{
		return (choose_f[i].fmt);
	i++;
	}

	return (NULL);
}
