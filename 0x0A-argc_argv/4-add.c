#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: the number of arguments.
 * @argv: an array of pointers to the arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");

	}

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]) || argv[i] < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}