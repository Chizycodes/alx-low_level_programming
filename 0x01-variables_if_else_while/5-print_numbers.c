#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Prints numbers 0 to 9'
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
	printf("\n");

	return (0);
}
