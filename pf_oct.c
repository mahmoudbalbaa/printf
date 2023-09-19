#include "main.h"

/**
 * to_octal - function that prints string.
 * @num: input int num.
 * Return: number of characters printed.
 */
int to_octal(unsigned int num)
{
	int octal[100];
	int i = 0;
	int j;

	while (num != 0)
	{
		octal[i] = num % 8;
		num /= 8;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		print_number(octal[j]);
	}
	return (i);
}

/**
 * pf_oct - function that prints string.
 * @args: format string.
 * Return: number of characters printed.
 */

int pf_oct(va_list args)
{
	int i;

	i = to_octal(va_arg(args, unsigned int));

	return (i);
}
