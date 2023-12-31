#include "main.h"

/**
 * to_uhex - function that prints string.
 * @num: input int num.
 * Return: number of characters printed.
 */

char *to_uhex(unsigned int num)
{
	FILE *fp;
	static char hex[100];
	int i = 0;

	if (num == 0)
	{
		return (0);
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
			hex[i] = remainder + 'A' - 10;
		}
		num /= 16;
		i++;
	}
	fp = fopen("file.txt", "w");
	fwrite(hex, sizeof(char), i, fp);
	fclose(fp);
	hex[i] = '\0'; /* Null-terminate the string*/
	return (hex);
}

/**
 * pf_uhex - function that prints string.
 * @args: format string.
 * Return: number of characters printed.
 */

int pf_uhex(va_list args)
{
	char *x;
	int i, l;

	x = to_uhex(va_arg(args, unsigned int));
	l = _strlen(x);
	for (i = l - 1; i >= 0; i--)
		_putchar(x[i]);

	return (l);
}
