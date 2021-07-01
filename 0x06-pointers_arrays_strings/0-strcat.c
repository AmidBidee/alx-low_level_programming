#include "holberton.h"
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
	while (*dest++ != '\0')
		;

	while ((*dest++ = *src++) != '\0')
		;

	return (dest);
}
