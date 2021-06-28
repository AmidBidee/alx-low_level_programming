#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - Return length of string
 * @s: param
 * Description: String to be passed in
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i, string_len;
	
	char *string = s;  /* copy string stored from point */
	
	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] != '\0')
			continue;
		else
			break;
	}
	string_len = i;
	
	return (string_len);
	return (0);
}

/**
 * rev_string - updates and reverses a string
 * @s: param
 * Description: string to be reversed
 */
void rev_string(char *s)
{
	int i, r, len; /* i -> main index, r -> reversed index, len -> length of string */

	char *string = s;

	len = _strlen(string);

	while (i < len)
	{
		for (r = len; r >= 0; r--)
		{
			 if (i != 0)
			 {
				 *(s + i) = string[r];
			 }
			 else
			 {
				 *s = string[r];
			 }
		}
		i++;
	}
}
