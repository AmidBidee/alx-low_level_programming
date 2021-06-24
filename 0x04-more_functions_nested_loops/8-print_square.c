#include "holberton.h"
/**
 * print_square - prints squares
 * @size: param
 * Description: size of square
 */
void print_square(int size)
{
	int i, x;

	if (size != 0 && size > 0)
	{
		i = 0;

		while (i < size)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
			++i;
		}
	}
	else
	{
		_putchar('\n');
	}
}
