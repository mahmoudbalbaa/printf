#include "main.h"

/**
 * pf_string - function that prints string.
 * @args: format string.
 * Return: number of characters printed.
 */

int pf_string(va_list args)
{
	char *str;
	int i, l;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	l = _strlen(str);
	for (i = 0; i < l; i++)
		_putchar(str[i]);

	return (l);
}
