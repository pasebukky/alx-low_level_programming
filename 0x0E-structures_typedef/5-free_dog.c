#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees up the memory allocated for dog_t
 * @d: Pointer to the dog_t structure being freed
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
