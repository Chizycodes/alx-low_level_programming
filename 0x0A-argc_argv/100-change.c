#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make
 *	change for an amount of money.
 * @argc: the number of arguments.
 * @argv: an array of pointers to the arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, cents, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv(1));

	if (cents < 0)
		printf("0\n");

	if (cents >= 25)
	{
		change += cents / 25;
		cents = cents % 25;
	}

	if (cents >= 10)
	{
		change += cents / 10;
		cents = cents % 10;
	}

	if (cents >= 5)
	{
		change += cents / 5;
		cents = cents % 5;

	}

	if (cents >= 2)
	{
		change += cents / 2;
		cents = cents % 2;
	}

	if (cents == 1)
	{
		change += 1;
		cents = 0;
	}

	printf("%d", change);

	return (0);
}
