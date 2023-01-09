#include <stdio.h>

/**
 * main - multiplies two numbers.
 * @argc: the number of arguments.
 * @argv: an array of pointers to the arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	int num1 = argv[1];
	int num2 = argv[2];

	printf("%d\n", num1 * num2);

	return (0);
}
