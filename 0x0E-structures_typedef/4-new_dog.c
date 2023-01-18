#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog -creates a new dog.
 * @name: name.
 * @age: age.
 * @owner: owner.
 *
 * Return: new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	bingo = malloc(sizeof(dog_t));

	if (bingo == NULL)
		return (NULL);

	bingo->name = name;
	bingo->age = age;
	bingo->owner = owner;

	return (bingo);
	
}
