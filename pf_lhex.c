#include "main.h"

/**
 * to_lhex - Converts an unsigned int to a lowercase hexadecimal string.
 * @num: The unsigned int to be converted.
 * Return: The resulting string.
 */

char *to_lhex(unsigned int num)
{
	static char hex[100];
	int i = 0;

	if (num == 0)
	{
		hex[i++] = '0';
		hex[i] = '\0';
		return (hex);
	}

	while (num != 0)
	{
		int remainder = num % 16;

		if (remainder < 10)
		{
			hex[i] = remainder + '0';
		}
		else
		{
			hex[i] = remainder + 'a' - 10;
		}
		num /= 16;
		i++;
	}

	hex[i] = '\0'; /* Null-terminate the string*/

	/* Reverse the string */
	for (int start = 0, end = i - 1; start < end; start++, end--)
	{
		char temp = hex[start];

		hex[start] = hex[end];
		hex[end] = temp;
	}

	return (hex);
}

/**
 * pf_lhex - Prints an unsigned int as a lowercase hexadecimal string.
 * @args: A va_list pointing to the unsigned int to be printed.
 * Return: The number of characters printed.
 */

int pf_lhex(va_list args)
{
	char *x;
	int l;

	x = to_lhex(va_arg(args, unsigned int));
	l = _strlen(x);

	for (int i = 0; i < l; i++)
		_putchar(x[i]);

	return (l);
}
