#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog
 * @name: the dogs' name
 * @age: the dogs age
 * @owner: the name of the owner of the dog
 *
 * Return: Pointer to the new_dog, or NULL if the function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));

if (!new_dog)
	return (NULL);

new_dog->name = strdup(name);
new_dog->owner = strdup(owner);

if (!(new_dog->name) || !(new_dog->owner))
{
	free(new_dog->name);
	free(new_dog->owner);
	free(new_dog);
	return (NULL);
}

new_dog->age = age;

return (new_dog);
}
