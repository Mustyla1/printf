#include "main.h"
/**
*print_unsigned - function to print integer
 * @args: argument
 * Return: integer
 */
int print_unsigned_int(va_list args)
{
unsigned int a = va_arg(args, unsigned int);
int number, last = a % 10, digit, exp = 1;
int  i = 1;

a = a / 10;
number = a;

if (last < 0)
{
_putchar('-');
number = -number;
a = -a;
last = -last;
i++;    
}
if (number  > 0)
{
while (number  / 10 != 0)
{
exp = exp * 10;
number = number / 10;
}
number = a;
while (exp > 0)
{
digit = number / exp;
_putchar(digit + '0');
number = number - (digit * exp);
exp = exp / 10;
i++;
}
}
_putchar(last + '0');

return (i);
}
