#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: param 1
 * Description: array
 * @n: param 2
 * Description: number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%i", a[i]);
			printf(", ");
		}
		else
			printf("%i\n", a[i]);
	}
}
