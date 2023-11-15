#include "main.h"

/**
 * _printf - selects the correct function to print
 * @format: identifier to look for
 * Return: integer
 */
int _printf(const char *format, ...)
{
va_list args;
int length = 0;

va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

length = print_formatted_string(format, args);

va_end(args);
return (length);
}

/**
 * print_formatted_string - prints formatted string
 * @format: identifier to look for
 * @args: variable arguments list
 * Return: integer
 */
int print_formatted_string(const char *format, va_list args)
{
checker c[] = {
{"%c", print_char},
{"%s", print_string},
{"%%", print_37},
{"%i", print_int},
{"%d", print_dec},
{"%b", print_binary},
{"%r", print_strrev},
{"%R", print_rot13},
{"%u", print_unsigned_int},
{"%o", print_octal},
{"%x", print_hexad},
{"%X", print_HEXAD},
{"%S", print_exclusive_string},
{"%p", print_pointer}
};
int i = 0, j, length = 0;

while (format[i] != '\0')
{
j = 13;
while (j >= 0)
{
if (c[j].id[0] == format[i] && c[j].id[1] == format[i + 1])
{
length += c[j].functions(args);
i = i + 2;
break;
}
j--;
}
if (j < 0)
{
_putchar(format[i]);
length++;
i++;
}
}
return (length);
}
