#include "main.h"
/**
 * get_bit - return value of a bit at given index
 * @n: number
 * @index: ith index
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp;
	int shift;

	if (n == 0)
		return (0);

	if (index > 64)
		return (-1);

	for (tmp = n, shift = 0; (tmp >>= 1) > 0; shift++)
		;

	for (; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
		{
			if ((n & (1 << index)) != 0)
				return (1);
			else
				return (0);
		}
	}

	return (0);
}
