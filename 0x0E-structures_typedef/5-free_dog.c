#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated to struct dog
 * @d: Pointer to the memory allocated to dog that would be freed
 * Return: void
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
