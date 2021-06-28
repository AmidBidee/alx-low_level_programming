#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: param 1
 * @b: param 2
 * Description: values to be switched
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
