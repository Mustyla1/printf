#include "main.h"

/**
 * _strlength - finds the length of a string
 * @a: string to be counted
 * Return: length of the string
 */

int _strlength(char *a)
{
	int i;
	int count = 0;

	for (i = 0 ; a[i] != '\0' ; i++)
		count++;
	return (count);
}


/**
 * _strlengthc - finds the length of a string but for constant characters
 * @a: string to be counted
 * Return: length of the string
 */

int _strlengthc(char *a)
{
	int i;
	int count = 0;

	for (i = 0 ; a[i] != '\0' ; i++)
		count++;
	return (count);
}

