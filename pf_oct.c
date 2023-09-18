#include "main.h"

/**
 * pf_oct - function that prints string.
 * @args: format string.
 * Return: number of characters printed.
 */

int pf_oct(va_list args)
{
	int i, l;

	i = va_arg(args, int);
	l = print_number(i);
	return (l);
}
