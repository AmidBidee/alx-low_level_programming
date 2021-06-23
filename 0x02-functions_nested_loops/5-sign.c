#include "holberton.h"
/**
 * print_sign - returns the sign of a number
 *
 * Return: 1 for +, 0 for 0, -1 for -
 * @n: params
 * Description: takes in integers
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}
	return (0);
}
