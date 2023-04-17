#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines the specs of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: shows name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*MAIN_H*/
