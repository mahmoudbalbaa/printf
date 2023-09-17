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
	int count = 0;

	if (!format)
		return (-1);

	va_start(arg, format);

	count += analyser(format, arg);

	va_end(arg);

	return (count);
}
