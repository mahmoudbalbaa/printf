#include "main.h"

/**
 * pf_Non - Non printable characters
 * (0 < ASCII value < 32 or >= 127) are printed this way:
 * \x, followed by the ASCII code value in hexadecimal
 * (upper case - always 2 characters)
 * @args: format string.
 * Return: number of characters printed.
 */

int pf_Non(va_list args)
{
	int i = 0, offset = 0;
	char *str = va_arg(args, char *);
	char buffer[BUFSIZ];
if (str == NULL)
		return (write(1, "(null)", 6));

	while (str[i] != '\0')
	{
		if (is_printable(str[i]))
			buffer[i + offset] = str[i];
		else
			offset += append_hexa_code(str[i], buffer, i + offset);

		i++;
	}

	buffer[i + offset] = '\0';

	return (write(1, buffer, i + offset));

}
