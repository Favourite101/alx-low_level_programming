#include <stdio.h>
#include "dog.h"

/**
 *main - check the code
 *new_dog - creates new dog
 *print_dog - prints dog struct
 *free_dog - frees dog struct
 *Return: Always 0.
 */
int main(void)
{
	dog *my_dog;
	my_dog = new_dog("Poppy", 3.5, "Bob");
	print_dog(my_dog);
	free_dog(my_dog);
	return (0);
}
