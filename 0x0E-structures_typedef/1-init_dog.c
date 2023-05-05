#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a struct
 * @d: structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: void
 */
void init_dog(dog *d, char *name, float age, char *owner)
{
    d->name = name;
    d->age = age;
    d->owner = owner;
}

