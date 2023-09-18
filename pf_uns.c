#include "main.h"

/**
 * pf_int - function that prints integer.
 * @args: format string.
 * Return: number of characters printed.
 */

int pf_uns(va_list args)
{
	int i, l;

	i = va_arg(args, unsigned int);
	l = print_number(i);
	return (l);
}
