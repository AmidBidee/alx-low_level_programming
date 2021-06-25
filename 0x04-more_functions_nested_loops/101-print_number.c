#include "holberton.h"
/**
 * print_number - Entry point
 * @n: integer nau
 */
void print_number(int n)
{
	unsigned int n_1;

	if(n < 0)
	{
		n_1 = -n;
		_putchar('-');
	}
	else
	{
		n_1 = n;
	}
	if (n_1 > 9)
	{
		n_1 = n_1 / 10;
		_putchar((n_1 % 10) + '0');
	}
}
