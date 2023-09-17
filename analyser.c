#include "main.h"

/**
 * analyser - a func that analyse format and count chars
 * @format: a string
 * @arg: an argument list
 * Return: NULL if any Error happens or count if not
 */

int analyser(const char *format, va_list arg)
{
	int i, count = 0;
	char *buff = NULL;

	if (format == NULL)
		return (-1);

	for (i = 0; format != NULL && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if ((format[i] == '\0') || (format[i] == ' ' && !format[i + 1]))
				return (-1);
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
