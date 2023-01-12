#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: pointer to new string or NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int index, newstr_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	newstr = malloc(sizeof(char) * len);

	if (newstr == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		newstr[newstr_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		newstr[newstr_index++] = s2[index];

	return (newstr);


}
