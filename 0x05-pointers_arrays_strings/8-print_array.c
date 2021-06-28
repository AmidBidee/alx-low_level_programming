#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: param 1
 * @n: param 2
 * Description: array, and number of elements
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%i", a[i]);
		if (n > 0)
			printf(", ");
	}
	printf("\n");
}
