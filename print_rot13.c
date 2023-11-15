#include "main.h"
/**
* print_rot13 - function that converts to rot13
* @args: argument
* Return: count
*
*/
int print_rot13(va_list args)
{
int b;
int c;
int count = 0;
int k = 0;
char *a = va_arg(args, char*);
char d[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
char e[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

if (a == NULL)
a = "(null)";
for (b = 0; a[b]; b++)
{
k = 0;
for (c = 0; d[c] && !k; c++)
{
if (a[b] == d[c])
{
_putchar(e[c]);
count++;
k = 1;
}
}
if (!k)
{
_putchar(a[b]);
count++;
}
}
return (count);
}
