#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: a pointer to the first string.
 * @s2: a pointer to the second string.
 *
 * Return: If s1 < s2, the -ve diff of the 1st unmatched characters.
 *	If s1 == s2, 0.
 *	If s1 > s2, the +ve diff of the 1st unmatched characters.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
