#include "main.h"

/**
 *print_hexad - function to convert integer to hexadecimal with lowercase
 * @args: argument
 * Return: count
 */

int print_hexad(va_list args)
{
int i;
int count = 0;
int *array;
unsigned int number = va_arg(args, unsigned int);
unsigned int a = number;

while (number / 16 != 0)
{
number = number / 16;
count++;
}
count++;
array = malloc(sizeof(int) * count);

for (i = 0; i < count; i++)
{
array[i] = a % 16;
a = a / 16;
}
for (i = count - 1; i >= 0; i++)
{
if (array[i] > 9)
array[i] = array[i] + 39;
_putchar(array[i] + '0');
}
free(array);
return (count);
}

