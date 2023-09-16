#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * _printf - function that produces output according to a format
 * @format: a pointer to const char holds a string
 *
 * Description: a program like printf
 *
 * Return: the value of count
 */

int gprintf(const char *format, ...)
{
	va_list arg;
	unsigned int count = 0, i;
	char c, *str;

	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i]  == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				c = (char)va_arg(arg, int);
				putchar(c);
				count++;
			}
			else if (format[i] == 's')
			{
				str = va_arg(arg, char *);
				puts(str);
				count += strlen(str);
			}
			else if (format[i] == '%')
			{
				c = format[i];
				putchar(c);
				count++;
			}
			else
			{
				puts("Invalid format specifier");
			}
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
