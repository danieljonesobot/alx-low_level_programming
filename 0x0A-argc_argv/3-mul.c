#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that takes first two integer arguments and prints the product
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if not enough arguments passed in, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		product *= atoi(argv[i]);
		printf("%d\n", product);
	}

	return (0);
}
