#include "main.h"
/**
 * _strcat - concatenate both strings
 * @dest: params
 * @src: parms
 * Description: strings to be concatenated
 *
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (dest[i] != '\0')
		i++;

	while ((dest[i++] = src[j++]) != '\0')
		;

	return (dest);
}
