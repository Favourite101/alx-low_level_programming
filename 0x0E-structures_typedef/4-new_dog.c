#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_name = 0, len_owner = 0, i, j;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	while (new_dog->name[len_name])
		len_name++;
	while (new_dog->owner[len_owner])
		len_owner++;
	new_dog->name = malloc(sizeof(name) * len_name + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(owner) * len_owner + 1);
	if (new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';
	for (j = 0; owner[j] != '\0'; j++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[i] = '\0';
	new_dog->age = age;

	return (new_dog);
}
