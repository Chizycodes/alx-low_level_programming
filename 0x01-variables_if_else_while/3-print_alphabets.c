#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Prints alphabet in lower and then uppercase'
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);

	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);

	putchar('\n');

	return (0);
}
