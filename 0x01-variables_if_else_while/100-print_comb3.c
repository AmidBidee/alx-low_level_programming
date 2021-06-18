#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long int n;

	for (n = 0 ; n < 90 ; ++n)
	{
		putchar((n % 10) + '0');
		if (n != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
