#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/*
 * _printf - prints the character based on the format
 * @format: format string to be printed
 * Return: integer count
 */
int _printf(const char *format, ...)
{
	/* Implementation of _printf function */

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
