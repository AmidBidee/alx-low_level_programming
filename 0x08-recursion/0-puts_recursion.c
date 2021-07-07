#include "holberton.h"
/**
 * _puts_recursion - prints a string
 * @s: string array
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
