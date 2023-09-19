#include "main.h"

/**
 * pf_char - function that prints pecentage  sign.
 * @args: format string.
 * Return: number of characters printed.
 */

int pf_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);

	return (1);
}
