#include "holberton.h"
/**
 * string_toupper - Entry point
 * @s: param
 * Description: string
 * Return: a pointer
 */
char *string_toupper(char *s)
{
	int i, j;

	i = j = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
		j++;
	}

	return (s);
}
