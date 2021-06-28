#include "holberton.h"
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
 * puts_half - prints half the string
 * @str: param
 * Description: sring to be passed in
 */
void puts_half(char *str)
{
	int i, len;

	len = _strlen(str);

	i = len;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
