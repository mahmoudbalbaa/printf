#include "main.h"

/**
 * analyser - a func that analyse format and count chars
 * @format: a string
 * @arg: an argument list
 * Return: NULL if any Error happens or count if not
 */

int analyser(const char *format, va_list arg)
{
	int i = 0, count = 0;
	char *buff = NULL;

	if ((format == NULL) || ((format[0] == '%') && (format[1] == '\0')))
		return (-1);

	again:

	for (; format != NULL && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				count++;
				putchar(format[i]);
			}
			else
			{
				buff = define_specifier(format[i], arg);
				if (buff == NULL)
					return (-1);
				count += strlen(buff);
				fwrite(buff, sizeof(char), strlen(buff), stdout);
				i++;
				goto again;
			}
		}
		else
		{
			count++;
			putchar(format[i]);
		}
	}

	return (count);
}
