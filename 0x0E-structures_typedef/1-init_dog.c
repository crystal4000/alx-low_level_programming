#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog variable to initialize
 * @name: Pointer to a string representing the name of the dog
 * @age: Floating-point number representing the age of the dog
 * @owner: Pointer to a string representing the owner of the dog
 *
 * Description: This function takes a pointer to a struct dog and initializes
 *              its elements with the provided values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
