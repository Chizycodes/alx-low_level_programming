#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'if else'
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	for (int x = "A"; x <= "Z"; x++)
	{
		int lower_x = tolower(x);

		putChar(lower_x);
	}

	return (0);
}
