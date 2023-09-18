#include "main.h"

/**
 * speci_in - converts a string to a pointer
 * @arg: an argument list
 * Return: NULL if error happens or str if not
 */

char speci_int(va_list arg)
{
	int in = va_arg(arg, int);
	char buffer [sizeof(int)*8+1];
	 itoa (in,buffer,10);
	if (buffer == NULL)
		return (NULL);

	return (*buffer);
}
