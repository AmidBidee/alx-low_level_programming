#include "holberton.h"
/**
 * _memset - fills memomry block with a constant byte
 * @s: pointer to the memory
 * @b: character to fill with
 * @n: number of bytes
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *mem =  s;
	char c = b;

	for (i = 0; i < n; i++)
		mem[i] = c;

	return (mem);
}
