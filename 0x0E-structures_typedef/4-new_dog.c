#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - creates a new dog
 * @d: dog
 *
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
	}
}
