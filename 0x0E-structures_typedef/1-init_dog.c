#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to struct dog
 * @name: Pointer to character array (dog's name)
 * @age: Age of the dog (float)
 * @owner: Pointer to character array (dog's owner)
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
