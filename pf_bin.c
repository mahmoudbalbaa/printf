#include "main.h"

/**
 * pf_bin - function that converts unsign int to binary.
 * @args: format string.
 * Return: number of characters printed.
 */


int pf_bin(va_list args)
{
	int i, l;

	i = va_arg(args, int);
	l = print_number(i);
	return (l);
}
