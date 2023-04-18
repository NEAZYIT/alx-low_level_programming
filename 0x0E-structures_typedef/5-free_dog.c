#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog
 *
 * @d: varibale to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	/* free memory from the variables to the pointer of dog_t */
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
