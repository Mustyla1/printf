#include "main.h"

/**
 *print_hexad_extra - function to convert integer to hexadecimal with lowercase
*@number: argument
* Return: count
*/

int print_hexad_extra(unsigned long int number)
{
long int i;
long int count = 0;
long int *array;
unsigned int a = number;

while (number / 16 != 0)
{
number = number / 16;
count++;
}
count++;
array = malloc(sizeof(long int) * count);

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
