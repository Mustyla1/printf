#include "main.h"

/**
 * print_string - print a string
 * @args: argument
 * Return: integer
 */

int print_string(va_list args)
{
	char *a;
	int i, length;

	a = va_arg(args, char *);
	if (a == NULL)
	{
		a = "(null)";
		length = _strlength(a);
		for (i = 0; i < length; i++)
			_putchar(a[i]);
		return (length);
	}
	else
	{
		length = _strlength(a);
		for (i = 0; i < length; i++)
			_putchar(a[i]);
		return (length);
	}
}


