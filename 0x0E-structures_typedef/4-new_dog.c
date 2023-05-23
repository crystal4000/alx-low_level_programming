#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Pointer to a string representing the name of the dog
 * @age: Floating-point number representing the age of the dog
 * @owner: Pointer to a string representing the owner of the dog
 *
 * Return: Pointer to the newly created dog (dog_t)
 *         or NULL if memory allocation fails.
 *
 * Description: This function creates a new dog using the provided name, age,
 *              and owner. It allocates memory for the dog and copies the name
 *              and owner strings into the newly allocated memory.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	/* Allocate memory for the new dog */
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
	{
		/* Return NULL if memory allocation fails */
		return (NULL);
	}

	/* Allocate memory and copy the name string */
	new_dog_ptr->name = malloc(strlen(name) + 1);
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		/* Return NULL if memory allocation fails */
		return (NULL);
	}
	strcpy(new_dog_ptr->name, name);

	/* Allocate memory and copy the owner string */
	new_dog_ptr->owner = malloc(strlen(owner) + 1);
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		/* Return NULL if memory allocation fails */
		return (NULL);
	}
	strcpy(new_dog_ptr->owner, owner);

	/* Set the age of the new dog */
	new_dog_ptr->age = age;

	return (new_dog_ptr);
}

