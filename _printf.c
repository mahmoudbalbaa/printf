#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>


int _printf(const char *format, ...)
{
	va_list arg;
	int count = 0, i;
	char c, *s;

	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
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
