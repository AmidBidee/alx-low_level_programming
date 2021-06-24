#include "holberton.h"
/**
 * more_numbers - print 0 - 14
 */
void more_numbers(void)
{
	int i, x;

	i = 0;

	while (i < 10)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
