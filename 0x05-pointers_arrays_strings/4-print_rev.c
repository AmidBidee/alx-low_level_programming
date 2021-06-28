#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - Return length of string
 * @s: param
 * Description: String to be passed in
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i, string_len;

	char *string = s;  /* copy string stored from point */

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] != '\0')
			continue;
		else
			break;
	}
	string_len = i;

	return (string_len);
	return (0);
}


/**
 * print_rev - prints a srting in reverse order
 * @s: param
 * Description: string to be passed in
 */
void print_rev(char *s)
{
	int i, len;

	char *string = s;

	len = _strlen(string);

	for (i = len; i >= 0; i--)
	{
		if (i != 0)
		{
			_putchar(string[i]);
		}
		else
		{
			_putchar(string[i]);
			break;
		}
	}
	_putchar('\n');
}
