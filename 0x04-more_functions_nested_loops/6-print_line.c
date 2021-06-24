#include "holberton.h"
/**
 * print_line - Entry point
 * @n: param
 * Description: number of lines
 */
void print_line(int n)
{
	int i;

	if (n != 0 && n > 0)
	{
		i = 0;

		while (i < n)
		{
			_putchar('_');
			++i;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
