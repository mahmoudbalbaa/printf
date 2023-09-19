#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: format string.
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j, count = 0;
	convert specs[] = {
		{"%s", pf_string}, {"%c", pf_char}, {"%%", pf_perc},{"%d", pf_dec}, {"%i", pf_int}, {"%b", pf_bin}, {"%u", pf_uns}, {"%o", pf_oct}, {"%x", pf_lhex}, {"%X", pf_uhex}, {"%S", pf_Non}
	};

	va_start(args, format);
	if ((format == NULL) || (format[0] == '%' && format[1] == '\0'))
		return (-1);
start:
	while (format[i] != '\0')
	{
		j = 0;
		while (j <= 9)
		{
			if (specs[j].n[0] == format[i] &&
				specs[j].n[1] == format[i + 1])
			{
				count += specs[j].f(args);
				i += 2;
				goto start;
			}
			j++;
		}
		_putchar(format[i]);
		count++;
		i++;
	}
	va_end(args);
	return (l);
}
