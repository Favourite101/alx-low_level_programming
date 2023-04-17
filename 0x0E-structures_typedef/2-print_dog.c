#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints content of struct dog
 * @d: struct name
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d 	== NULL)
		return;
	if (d->name == NULL)
		return;
	if (d->owner == NULL)
		return;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
