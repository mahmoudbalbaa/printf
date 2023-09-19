#include "main.h"

/**
 * to_octal - function that prints string.
 * @num: input int num.
 * Return: number of characters printed.
 */
int to_lexu(unsigned int num)
{
    char hex[100];
    int i = 0;
    if (num == 0) 
    {
        printf("0");
        return (i);
    }

    while (num != 0) {
        int remainder = num % 16;
        if (remainder < 10) {
            hex[i] = remainder + '0';
        } else {
            hex[i] = remainder + 'A' - 10;
        }
        num /= 16;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        putchar(hex[j]);
    }

return (i);
}
/**
 * pf_oct - function that prints string.
 * @args: format string.
 * Return: number of characters printed.
 */

int pf_lhex(va_list args)
{
	int x;

	x = to_lexu(va_arg(args, unsigned int));

	return (x);
}
