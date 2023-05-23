#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing information about a dog
 * @name: Pointer to a string representing the name of the dog
 * @age: Floating-point number representing the age of the dog
 * @owner: Pointer to a string representing the owner of the dog
 *
 * Description: This structure defines the attributes of a dog,
 *              including its name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */

