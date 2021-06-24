#include "holberton.h"
/**
 * print_numbers - print numbers from 0 - 9
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; ++c)
	{
		_putchar(c);
	}
	_putchar('\n');
}
