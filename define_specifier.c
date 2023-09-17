#include "main.h"

/**
 * _define_specifier - a function defines the type of specifier
 * @x: a character
 * @arg: a variadic list of arguments
 * Return: the value of count
 */

int define_specifier(char format, va_list arg)
{
	char *s = NULL;
	int count = 0, i;
	speci_data data_tbl[] = {
		{"c", speci_char},
		{NULL, NULL},
	}

	for (i = 0; data_tbl[i].speci_ch != NULL; i++)
	{
		if(*(data_tbl[i].speci_ch) == format)
		{
			s = data_tbl[i].speci_op;
			puts(s);
		}
	}
	
	return (count);
}
