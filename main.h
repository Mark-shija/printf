#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
int (*find_func(const char *format))(va_list);
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list i);
int print_decimal(va_list d);
int print_binary(va_list b);
int print_hexadec_x(va_list x);
int print_hexadec_X(va_list X);
int print_unsigned(va_list u);
int print_octadec(va_list o);

/**
 * struct text_format - identifies text forrmat
 * @identify: A string checking the format
 * @fmt: A function pointer to matching
 * formarting function
 */
typedef struct text_format
{
	char *identify;
	int (*fmt)(va_list);
} text_f;
#endif
