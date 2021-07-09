#include "holberton.h"
/**
 * _memcpy - copies bytes from memeory area
 * @dest: destination area
 * @src: source memory
 * @n: number of bytes
 *
 * Return: pointer (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
