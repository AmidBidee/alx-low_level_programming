#include "main.h"
/**
 * binary_to_uint - convert binary to num
 * @b: pointer to binary string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, power;
	int str_len = _strlen(b);
	int k;

	if (b == NULL)
		return (0);

	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}

	for (power = 1, num = 0, str_len--; str_len >= 0; str_len--, power *= 2)
	{
		if (b[str_len] == '1')
			num += power;
	}
	return (num);
}
