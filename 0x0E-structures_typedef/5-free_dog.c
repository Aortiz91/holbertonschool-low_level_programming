#include "dog.h"
#include <stdio.h>
/**
 * free_dog - Write a function that frees dogs.
 * @d: structure dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

