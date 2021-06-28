#include "holberton.h"
/**
 * puts2 - print chars in string but skip by 2
 * @str: param
 * Description: srting
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i+=2)
	{
			_putchar(str[i]);
	}
	_putchar('\n');
}
