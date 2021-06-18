#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char a_f;

	int n;

	for (n = 0 ; n < 10 ; ++n)
	{
		putchar((n % 10) + '0');
	}
	for (a_f = 'a'; a_f <= 'f' ; ++a_f)
	{
		putchar(a_f);
	}
	putchar('\n');
	return (0);
}
