#include "main.h"

/**
 * pf_rot13 - function that prints a string in rot13.
 * @args: format string.
 * Return: number of characters printed.
 */

int pf_rot13(va_list args)
{
	char *str = va_arg(args, char *);
	int i, j, count = 0;
	char norm_ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_ch[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; norm_ch[j] != '\0'; j++)
		{
			if (str[i] == norm_ch[j])
			{
				_putchar(rot_ch[j]);
				count++;
				break;
			}
		}
		if (norm_ch[j] == '\0')
		{
			_putchar(str[i]);
			count++;
		}
	}

	return (count);
