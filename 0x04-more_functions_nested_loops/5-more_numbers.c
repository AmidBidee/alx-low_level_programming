#include "holberton.h"
#include <stdio.h>
/**
 * more_numbers - print 0 - 14
 */
void more_numbers(void)
{
	int i;

	int x;

	for (i = 0; i <= 10; ++i)
	{
		x = 0;

		while (x < 15)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
			++x;
		}
		_putchar('\n');
	}
}
