#include "main.h"
char* itoa(int value, char* str, int base) {
    int i ,length;
    char* ptr;
    /* Handle negative numbers*/
    if (value < 0 && base == 10) {
        *str++ = '-';
        value = -value;
    }

    /* Convert the number to a string in reverse order*/
    ptr = str;
    do {
        int digit = value % base;
        *ptr++ = digit < 10 ? '0' + digit : 'A' + digit - 10;
        value /= base;
    } while (value > 0);

    /* Add null terminator*/
    *ptr = '\0';

    /* Reverse the string*/
    length = ptr - str;
    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    return str;
}
