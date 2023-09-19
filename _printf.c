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
	convert *specs = data_specs();

	va_start(args, format);
	if ((format == NULL) || (format[0] == '%' && format[1] == '\0'))
		return (-1);
start:
	while (format[i] != '\0')
	{
		j = 0;
		while (j <= 11)
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
	return (count);
}
