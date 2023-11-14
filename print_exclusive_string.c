#include "main.h"

/**
*print_exclusive_string - function to print exclusive string
*@args: argument
*Return: integer
*/

int print_exclusive_string(va_list args)
{
	char *a;
	int i;
	int length = 0;
	int value;

	a = va_arg(args, char *);
	if (a == NULL)
		a = "(null)";
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] < 32 || a[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = a[i];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_HEXAD_extra(value);
		}
		else
		{
			_putchar(a[i]);
			length++;
		}
	}
	return (length);
}

