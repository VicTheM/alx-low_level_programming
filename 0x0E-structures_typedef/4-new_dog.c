#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a dog ot type struct dog
 * @name: name
 * @age: float
 * @owner; owner
 *
 * Return: pointer to dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * strlen(name));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * strlen(owner));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	dog->name = strcpy(dog->name, name);
	dog->owner = strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
