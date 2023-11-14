#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>



/**
* struct format - converter for printf
* @id: type char pointer of the specifier
*@functions: functions for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*functions)();
} checker;

int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int _strlength(char *a);
int _strlengthc(char *a);
int print_37(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_binary(va_list args);
int print_unsigned_int(va_list args);
int print_octal(va_list args);
int print_hexad(va_list args);
int print_HEXAD(va_list args);
int print_exclusive_string(va_list args);
int print_HEXAD_extra(unsigned int number);
int print_pointer(va_list args);
int print_hexad_extra(unsigned long int number);
int print_strrev(va_list args);
int print_rot13(va_list args);
int _printf(const char *format, ...);
int rev_string(char *s);
int *_strcpy(char *dest, char *src);
int main(void);

#endif

