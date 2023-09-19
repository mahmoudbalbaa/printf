#include "main.h"

/**
 * pf_dec - function that prints decimal.
 * @args: format string.
 * Return: number of characters printed.
 */

int pf_dec(va_list args)
{
	int i, l;

	i = va_arg(args, int);
	l = print_number(i);

	return (l);
}
