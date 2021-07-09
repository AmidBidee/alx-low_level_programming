#include "holberton.h"
/**
 * _isalpha - return 0 if letter
 *
 * Return: 1 if letter 0 if not
 * @c: param
 * Description:  it's an integer
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
