#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n != 0)
	{
		int num = n;

		int digit = num % 10;

		num = num / 10;
		if (digit > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, digit);
		}
		else if (digit == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, digit);
		}
		else if (digit < 6 && digit != 0)
		{
			printf("Last digit of %d is %d and is less than 6 not 0\n", n, digit);
		}
	}
	return (0);
}
