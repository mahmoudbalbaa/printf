#include "main.h"

/**
 * speci_str - converts a string to a pointer
 * @arg: an argument list
 * Return: NULL if error happens or str if not
 */

char *speci_str(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		return (NULL);

	return (str);
}
