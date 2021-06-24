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
		i = 1;

		while (i <= n)
		{
			if (i == n)
				_putchar('_');
			else
			{
				_putchar('_');
				i++;
			}
		}
	}
}
