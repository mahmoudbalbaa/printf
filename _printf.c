#include "main.h"


/**
 * _printf - function that produces output according to a format
 * @format: a pointer to const char holds a string
 *
 * Description: a program like printf
 *
 * Return: the value of count
 */


int _printf(const char *format, ...)
{
	va_list arg;
	int count = 0, i;

	if (!format)
		return (-1);
	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i] || format[i] == ' ' || format[i] == '\0')
				return (-1);
			count += _define_specifier(format[i], arg);
		}
		else
		{
			putchar(format[i]);
			count++;
		}
	}
	va_end(arg);
	return (count);
}
