#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>

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

typedef struct text_format
{
	char *identify;
	int (*fmt)(va_list);
}text_f;
#endif
