#include "main.h"

/**
 * pf_char - function that prints pecentage  sign.
 * @args: format string.
 * Return: number of characters printed.
 */

int pf_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
* pf_perc - function that prints char.
*
* Return: number of characters printed.
*/

int pf_perc(void)
{
	_putchar('%');
	return (1);
}

/**
 * pf_int - function that prints integer.
 * @args: format string.
 * Return: number of characters printed.
 */

int pf_int(va_list args)
{
	int i, l;

	i = va_arg(args, int);
	l = print_number(i);
	return (l);
}


/**
 * pf_dec - function that prints decimal.
 * @args: format string.
 * Return: number of characters printed.
 */

int pf_dec(va_list args)
{
	int i, l;

	i = va_arg(args, int);
	l = print_number(i);
	return (l);
}
