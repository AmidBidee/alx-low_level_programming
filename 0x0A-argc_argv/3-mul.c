#include "holberton.h"
/**
 * main - multiplies two numbers
 * @argc: argument count in int
 * @argv: argument values
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if ((argc - 1) == 2)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
		printf("Error\n");
	return (0);
}
