#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer string
 * @c: character to find
 *
 * Return: pointer to of c
 */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return ((char *)s);
	}
	return (0);
}
