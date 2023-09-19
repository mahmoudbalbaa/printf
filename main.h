#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct format - chooses which conv spec
 * @f: First member
 * @n: Second member
 *
 */

typedef struct format
{
	char *n;
	int (*f)();
} convert;

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
int _strlenc(const char *s);
int pf_char(va_list args);
int pf_string(va_list args);
int pf_perc(void);
int pf_int(va_list args);
int pf_dec(va_list args);
int print_number(int n);
int int_to_binary(unsigned int k);
int pf_bin(va_list args);
int pf_uns(va_list args);
int pf_oct(va_list args);
int pf_uhex(va_list args);
int pf_lhex(va_list args);
int pf_Non(va_list args);
convert *data_specs(void);
int hexa_code(char ascii_code, char buffer[], int i);
int pf_ptr(va_list args);
int is_printable(char c);
int pf_rev(va_list args);
int pf_rot13(va_list args);

#endif
