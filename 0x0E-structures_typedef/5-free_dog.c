#include "dog.h"

/**
 * free_dog - Frees all the resources allocated to a dog struct.
 *
 * @d: The dog struct to be freed.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
