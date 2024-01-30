#include <unistd.h>

/*
 * _putchar - prints character to stdout
 * @c: the character to be printed
 *
 * Return: 1 on success
 * On error, -1 is returned, and error is set approprietly
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
