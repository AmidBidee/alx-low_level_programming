#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	int x = *b;

	*a = x;
	*b = i;
}
