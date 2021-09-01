#include "main.h"
/**
 * main - entry point
 * @args: command line arguments
 * @argc: argument count
 * Return: number bytes able to copy
 */
int main(int argc, char *args[])
{
	int f1, f2, n, b;
	int perm = 0666;
	char buf[1];

	if (argc != 3)
		return (0);
	if ((f1 = open(args[1], O_RDONLY, 0)) == -1)
		exit (-1);
	if ((f2 = creat(args[2], perm)) == -1)
		exit(-1);

	while ((n = read(f1, buf, sizeof(buf))) > 0)
		if ((b = write(f2, buf, n)) != n)
			exit(-1);
	return (b);
}
