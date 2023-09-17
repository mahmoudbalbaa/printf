#include "main.h"

/**
 * _speci_char - a func to pointer
 * @arg: a variadic list of arguments
 * Return: NULL if c equals NULL or c if not
 */

char *speci_char(va_list arg)
{
	char *c = malloc(sizeof(char) * 2);

	if (c == NULL)
		return (NULL);
	c[0] = (char)va_arg(arg, int);
	c[1] = '\0';

	return (c);
}
