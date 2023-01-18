#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog -creates a new dog.
 * @d: struct dog.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
