#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int _define_specifier(char x, va_list arg);

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

	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
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

/**
 * _define_specifier - a function defines the type of specifier
 * @x: a character
 * @arg: a variadic list of arguments
 * Return: the value of count
 */

int _define_specifier(char x, va_list arg)
{
	char c, *s;
	int count = 0;

	switch (x)
	{
		case 'c':
			c = (char)va_arg(arg, int);
			putchar(c);
			count++;
			break;
		case 's':
			s = va_arg(arg, char *);
			while (*s)
			{
				putchar(*s++);
				count++;
			}
			break;
		case '%':
			putchar('%');
			count++;
			break;
		default:
			puts("Invalid format specifier");
	}

	return (count);
}
