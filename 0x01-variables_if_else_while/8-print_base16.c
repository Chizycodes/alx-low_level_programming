#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Prints numbers of base 16'
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int x;
	char l;

	for (x = 0; x <= 10; x++)
		putchar((x % 10) + '0');

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
