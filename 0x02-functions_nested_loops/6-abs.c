#include "holberton.h"
/**
 * _abs - prints absolute value of integer
 *
 * @n: params
 * Descript: don't ask me
 * Return: 0
 */
int _abs(int n)
{
	int c;

	if (n < 0)
	{
		c = n * -1;

		return (c);
	}
	else
	{
		return (n);
	}
	
	return (0);
}
