#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/*
 * _printf - prints a character on stdout
 * @format: a character string to be printed
 * Return: always an integer
 *
int _printf(const char *format, ...)
{
	int print_char = 0;

	va_list args;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			print_char++;
		}
		else
		{
			format++;
			
			if (*format == '\0')
				break;
			else if (*format == '%')
			{
				write(1, format, 1);
				print_char++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args, int);
				write(1, &c, 1);
				print_char++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);
				size_t len = strlen(str);
				write(1, str, len);
				print_char += len;
			}
		}
		format++;
	}

	va_end(args);

	return (print_char);
}
*/
