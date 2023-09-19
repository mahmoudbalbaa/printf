#include "main.h"

/**
 * pf_bin - function that converts unsign int to binary.
 * @args: format string.
 * Return: number of characters printed.
 */
int pf_bin(va_list args)
{
	unsigned int n, m, i, sum;
	unsigned int a[32];
	int count;


	n = va_arg(args, unsigned int);
	m = 2147483648; /* (2 ^ 31) */
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			char z = '0' + a[i];

			write(1, &z, 1);
			count++;
		}
	}
	return (count);
}
