#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: format string.
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j, l = 0;
	convert specs[] = {
		{"%s", pf_string}, {"%c", pf_char}, {"%%", pf_perc},
		{"%d", pf_dec}, {"%i", pf_int}, {"%b", pf_bin}, {"%u", pf_uns}, {"%o", pf_oct}, {"%x", pf_lhex}, {"%X", pf_uhex}
	};

	va_start(args, format);
	if ((format == NULL) || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 0;
		while (j <= 9)
		{
			if (specs[j].n[0] == format[i] &&
				specs[j].n[1] == format[i + 1])
			{
				l += specs[j].f(args);
				i += 2;
				goto Here;
			}
			j++;
		}
		_putchar(format[i]);
		l++;
		i++;
	}
	va_end(args);
	return (l);
}
