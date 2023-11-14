#include "main.h"

/**
 * print_char - function to print a character
 * @args: argument
 * Return: integer
 */
int print_char(va_list args)
{
	char a;

	a = va_arg(args, int);
	_putchar(a);
	return (1);
}

