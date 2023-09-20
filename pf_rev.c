#include "main.h"
#include <stdarg.h>

/**
 * pf_rev - function that prints a reversed string.
 * @args: format string.
 * Return: number of characters printed.
 */

int pf_rev(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0, count = 0;

	if (str == NULL)
		return (-1);

	for (; str[len] != '\0'; len++)
		;

	for (int i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}

	return (count);
}
