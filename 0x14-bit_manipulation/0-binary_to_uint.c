#include "main.h"
/**
 * binary_to_uint - convert binary to num
 * @b: pointer to binary string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, power;
	int str_len;

	if (b == NULL)
		return (0);

	for (str_len = 0; b[str_len]; str_len++)
	{
		if (b[str_len] != '0' && b[str_len] != '1')
			return (0);
	}

	for (power = 1, num = 0, str_len--; str_len >= 0; str_len--, power *= 2)
	{
		if (b[str_len] == '1')
			num += power;
	}
	return (num);
}
