#include "main.h"
/**
* _printf - is a function that selects the correct function to print
* @format: identifier to look for
* Return: integer
*/

int _printf(const char *format, ...)

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

		va_list args;
		int i = 0, j, length = 0;

		va_start(args, format);
		if (format == NULL || (format[0] == '%' && format[1] == '\0'))
			return (-1);

Here:
		while (format[i] != '\0')
		{
			j = 13;
			while (j >= 0)
			{
				if (c[j].id[0] == format[i] && c[j].id[1] == format[i + 1])
				{
					length += c[j].functions(args);
					i = i + 2;
					goto Here;
				}
				j--;
			}
			_putchar(format[i]);
			length++;
			i++;
		}
		va_end(args);
		return (length);
}

