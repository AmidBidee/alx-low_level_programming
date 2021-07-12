#include "holberton.h"
/**
 * main - multiplies two numbers
 * @argc: argument count in int
 * @argv: argument values
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
		printf("Error\n");
	return (0);
}
