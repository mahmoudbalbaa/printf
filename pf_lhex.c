#include "main.h"

/**
 * to_octal - function that prints string.
 * @num: input int num.
 * Return: number of characters printed.
 */
char* to_lhex(unsigned int num) {
    if (num == 0) {
        return "0";
    }

    static char hex[100];
    int i = 0;

    while (num != 0) {
        int remainder = num % 16;
        if (remainder < 10) {
            hex[i] = remainder + '0';
        } else {
            hex[i] = remainder + 'a' - 10;
        }
        num /= 16;
        i++;
    }

    FILE *fp;
    fp = fopen("file.txt", "w");
    fwrite(hex, sizeof(char), i, fp);
    fclose(fp);

    hex[i] = '\0'; // Null-terminate the string
    return hex;
}

/**
 * pf_oct - function that prints string.
 * @args: format string.
 * Return: number of characters printed.
 */

int pf_lhex(va_list args)
{
	char* x;
	int i ,l;
	l = _strlen(str);

	x = to_lexu(va_arg(args, unsigned int));
 	for (i = 0; i < l; i++)
		_putchar(x[i]);
	return (l);
}
