#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog
 * @d: Pointer to the dog_t structure to free
 *
 * Description: This function takes a pointer to a dog_t structure
 *              and frees the memory allocated for the dog's name and owner,
 *              as well as the memory allocated for the dog itself.
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

