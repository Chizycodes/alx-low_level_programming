#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in
 *		memory which contains a copy of the string param.
 * @str: string.
 *
 * Return: a pointer to duplicated string or NULL.
 */

char *_strdup(char *str)
{
	char *newstr;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	newstr = malloc(sizeof(char) * (len + 1));

	if (newstr == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		newstr[index] = str[index];

	newstr[len] = '\0';

	return (newstr);

}
