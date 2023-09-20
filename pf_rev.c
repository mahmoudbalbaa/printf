#include "main.h"

/**
 * pf_rev - Prints reverse string.
 * @args: Lista of arguments
 * Return: Numbers of chars printed
 */

int pf_rev(va_list args)
{
	char *str;
	int i, count = 0;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		return (-1);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}

	return (count);
}
