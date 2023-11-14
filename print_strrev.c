#include "main.h"

/**
* print_strrev - function that prints a string in reverse
* @args: argument
*
* Return: integer
*/
int print_strrev(va_list args)
{
	char *a = va_arg(args, char*);
	int b;
	int c = 0;

	if (a == NULL)
		a = "(null)";
	while (a[c] != '\0')
		c++;
	for (b = c - 1; b >= 0; b--)
		_putchar(a[b]);
	return (c);
}


