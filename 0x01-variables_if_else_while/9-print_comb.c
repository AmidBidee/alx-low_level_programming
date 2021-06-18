#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; ++n)
	{
		if (n == 9)
		{
			putchar((n % 10) + '0');
		}
		else
		{
			putchar((n % 10) + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
