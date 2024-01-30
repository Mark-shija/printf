#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/*
 * find_func - finds the format printing function
 * triggers the printing function bt involking
 * @format: format to be printed on std out
 * Return: always NULL or printing function
 */
int (*find_func(const char *format))(va_list)
{
	unsigned int i = 0;
	text_f choose_f[] = {
		{"c", print_char},
		{"s", print_string},
		/*
		{"i", print_int},
		{"d", print_decimal},
		{"b", print_binary},
		{"o", print_octadec},
		{"x", print_hexadec_x},
		{"X", print_hexadec_X},*/
		{NULL, NULL}
	};

	while (choose_f[i].identify[0] == (*format))
	{
		return (choose_f[i].fmt);
	i++;
	}

	return (NULL);
}

/*
 * _printf - prints the character based on the format
 * @format: format string to be printed
 * Return: Always format size on std out
 */
int _printf(const char *format, ...)
{
	va_list args;
	
	int (*fptr)(va_list);

	unsigned int i = 0, count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			count++;
			i++;
		}

		if (format[i] == '\0')
			return (count);

		fptr = find_func(&format[i + 1]);

		if (fptr != NULL)
		{
			count += fptr(args);
			i += 2;
			continue;
		}

		if (!format[i + 1])
			return (-1);

		_putchar(format[i]);
		count++;

		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}

	va_end(args);

	return (count);
}
	


