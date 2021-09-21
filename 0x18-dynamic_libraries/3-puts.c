#include "main.h"
/**
 * _puts - prints strings
 * @str: param
 * Description: array of characters or string
 */
void _puts(char *s)
{
	int i;

	char *string = s;

	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
}
