#include "holberton.h"
/**
 * strstr - finds the first occurrence of the substring needle in a string
 * @haystack: string to be searched
 * @needle: subtring to be found
 * 
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	b = needle;

	if (*b == 0)
		return (haystack);

	for ( ; *haystack != 0; haystack += 1)
	{
		if (*haystack != *b)
			continue;
		a = haystack;
		while (1)
		{
			if (*b == 0)
				return haystack;
			if (*a++ != *b++)
				break;
		}
		b = needle;
	}
	return (0);
}
