#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: the string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: pointer to the matched byte or null.
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				return (s);
			}
		}

		s++;
	}

	return ('\0');
}
