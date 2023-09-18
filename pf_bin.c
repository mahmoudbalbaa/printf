#include "main.h"

/**
 * int_to_binary - function that converts unsign int to binary.
 * @args: format string.
 * Return: number of characters printed.
 */
int int_to_binary(unsigned int k)
{
	if (k == 0 || k == 1)
		return (k);
	return ((k % 2) + 10 * int_to_binary(k / 2));
}
/**
 * pf_bin - function that converts unsign int to binary.
 * @args: format string.
 * Return: number of characters printed.
 */


int pf_bin(va_list args)
{
char *buffer;
	int bin;
int x = va_arg(arg, int);
	if (x < 0)
		x *= -1;
bin = int_to_binary(x);
	int print_number(bin);

}
