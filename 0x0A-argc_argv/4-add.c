#include "holberton.h"
/**
 * main - adds infinite number of integers
 * @argc: argument count
 * @argv: argument values
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, n, total;
	char *p;
	total = 0;

	if ((argc - 1) != 0)
	{
		for (i = 1; i < argc; i++)
		{
			n = strtol(argv[i], &p, 10);
			if (n)
				total += n;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	printf("%d\n", total);
	return (0);
}
