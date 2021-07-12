#include "holberton.h"
/**
 * main - multiplies two numbers
 * @argc: argument count in int
 * @argv: argument values
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;

	if ((argc - 1) != 0)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%i\n", a * b);
	}
	else
		printf("Error\n");
	return (0);
}
