#include "holberton.h"
/**
 * _puts - prints strings
 * @str: param
 * Description: array of characters or string
 */
void _puts(char *str)
{
	int i;

	char *string = str;

	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
}
