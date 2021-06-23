#include "holberton.h"
/**
 * print_last_digit - return last digit
 *
 * @num: params
 * Description: Any number or integer
 * Return: 0
 */
int print_last_digit(int num)
{
	if ( num < 0)
	{
		int n = num * -1;
		return (n % 10);
	}
	else
	{
		int n = num % 10;
		_putchar(n + '0');
	}
	return (0);
}
