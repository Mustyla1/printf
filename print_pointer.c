#include "main.h"

/**
*print_pointer - function to print a pointer
*@args: argument
*Return: integer
*/

int print_pointer(va_list args)
{
	void *p;
	char *a = "(nil)";
	long int b;
	int i;
	int c;

	p = va_arg(args, void*);
	if (p == NULL)
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			_putchar(a[i]);
		}
		return (i);
	}

	b = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	c = print_hexad_extra(b);
	return (c + 2);
}

