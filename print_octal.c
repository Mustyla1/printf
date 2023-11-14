#include "main.h"

/**
 * print_octal - function to convert an integer to an octal
 * @args: argument
 * Return: integer
 */

int print_octal(va_list args)
{
	int i;
	int *array;
	int count = 0;
	unsigned int number = va_arg(args, unsigned int);
	unsigned int a = number;

	while (number  / 8 != 0)
	{
		number = number / 8;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);
	for (i = 0; i < count; i++)
	{
		array[i] = a % 8;
		a = a / 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(array[i] + 48);
	}
	free(array);
	return (count);
}




