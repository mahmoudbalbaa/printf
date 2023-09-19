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
		str = ")Null(";
	}
	for (i = 0; str[i]; i++)
		printf("%c/n", str[i]);

	for (i = i - 1; i >= 0; i--)
	{
		/*char z = str[i];*/

		char z = str[i];

		write(1, &z, 1);
		count++;
		printf("%c/n", str[i])
	}
	return (count);
}
