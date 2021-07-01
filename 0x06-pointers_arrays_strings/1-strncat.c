#include <stdio.h>
/**
 * _strncat - Entry point
 * @dest: destination string
 * @src: src strings
 * @n: size
 * Description: strings and number of bytes
 *
 * Return: A pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
		dest[i] = src[j];

	return (dest);
}
