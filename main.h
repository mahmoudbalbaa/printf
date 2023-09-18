#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct speci_lst - struct for define specifier
 * @speci_ch: hold the char of specifier
 * @speci_op: a pointer to function holds specifier's operation
 */

typedef struct speci_lst
{
	char *speci_ch;
	char *(*speci_op)(va_list);
} speci_data;

char* itoa(int value, char* str, int base);
int _printf(const char *format, ...);
int analyser(const char *format, va_list arg);
char *define_specifier(char format, va_list arg);
char *speci_char(va_list arg);
char *speci_str(va_list arg);
char *speci_int(va_list arg);
char *speci_des(va_list arg);

#endif /* _MAIN_H */
