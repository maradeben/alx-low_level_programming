#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free a dog
 * @d: the dog
 * Returnz None
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
