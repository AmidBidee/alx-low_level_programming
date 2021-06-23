#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always return 0
 */
int main(void)
{
	int i;

	char array[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};

	for (i = 0 ; i < 9; i++)
	{
		_putchar(array[i]);
	}
	_putchar('\n');

	return (0);
}
