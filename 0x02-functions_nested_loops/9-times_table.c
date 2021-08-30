#include "holberton.h"
/**
 * times_table - times table
 *
 * Return: 0
 */
void times_table(void)
{
	int i;
	
	int j;

	int n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = j * i;
			
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar(n  + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		
		_putchar('\n');
	}
}
