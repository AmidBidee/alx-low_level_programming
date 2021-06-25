#include "holberton.h"
/**
 * print_diagonal - Entry point
 * @n: param
 * Description: length of diagonal line
 */
void print_triangle(int size)
{
	int c, i = 0;
	
	int space;
	
	if (size > 0)
	{
		while (i < size)
		{
			space = size - i - 1;
			while (c < size)
			{
				if (space > c)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				c++;
			}
			i++;
			c = 0;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
