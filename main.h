#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int _strlength(char *a);
int _strlengthc(char *a);
int print_37(va_list args);
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
int print_formatted_string(const char *format, va_list args);

#endif
