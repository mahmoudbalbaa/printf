#include "main.h"

/**
 * pf_ptr - Prints the memory address of a variable.
 * @args: A va_list pointing to the variable whose address is to be printed.
 * Return: The number of characters printed.
 */

int pf_ptr(va_list args)
{
	void *adr = va_arg(args, void *);
	int count = 0;
	char hex_chars[] = "0123456789abcdef";
	unsigned long num = (unsigned long)adr;

	if (adr == NULL)
	{
		count += _putchar('(');
		count += _putchar('n');
		count += _putchar('i');
		count += _putchar('l');
		count += _putchar(')');
	}
	else
	{
		char buf[20];
		int i = 0;

		while (num != 0)
		{
			buf[i++] = hex_chars[num % 16];
			num /= 16;
		}
		count += _putchar('0');
		count += _putchar('x');
		while (--i >= 0)
			count += _putchar(buf[i]);
	}
	return (count);
}
