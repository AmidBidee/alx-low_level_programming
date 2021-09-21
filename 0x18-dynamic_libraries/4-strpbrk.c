#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to search
 * @accept: bytes to take in
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *scp;
	int c, sc;

	while ((c = *s++) != 0)
	{
		for (scp = accept; (sc = *scp++) != 0;)
		{
			if (sc == c)
				return ((char *)(s - 1));
		}
	}
	return (0);
}
