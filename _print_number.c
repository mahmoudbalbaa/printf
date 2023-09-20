#include "main.h"

/**
 * print_number - a function print a number.
 * @n : the number
 * Return: length of number
 */

int print_number(int n)
{
	int i = 1;
	int m, l = n % 10, digit, exp = 1;

	n = n / 10;
	m = n;

	if (l < 0)
	{
		_putchar('-');
		m = -m;
		n = -n;
		l = -l;
		i++;
	}
	if (m > 0)
	{
		while (m / 10)
		{
			exp = exp * 10;
			m = m / 10;
		}
		m = n;
		while (exp > 0)
		{
			digit = m / exp;
			_putchar(digit + '0');
			m = m - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(l + '0');

	return (i);
}
