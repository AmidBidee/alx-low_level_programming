#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: params 1
 * @s2: params 2
 * Descriptions: strings to be passed in
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	
	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
			return 0;
	}
	return s1[i] - s2[i];
}
