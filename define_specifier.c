#include "main.h"

/**
 * define_specifier - a function defines the type of specifier
 * @format: a character
 * @arg: a variadic list of arguments
 * Return: the value of count
 */

char *define_specifier(char format, va_list arg)
{
	char *s = NULL;
	int i;
	speci_data data_tbl[] = {
		{"c", speci_char},
		{"s", speci_str},
		{"i", speci_int},
		{NULL, NULL},
	};

	for (i = 0; data_tbl[i].speci_ch != NULL; i++)
	{
		if (*(data_tbl[i].speci_ch) == format)
		{
			s = data_tbl[i].speci_op(arg);
			break;
		}

	}
	if (s == NULL)
		return (NULL);
	return (s);
}
