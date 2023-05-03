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
typedef struct
{
    char *name;
    float age;
    char *owner;
}dog;


dog dog_t;

void init_dog(dog *d, char *name, float age, char *owner);
void print_dog(dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*MAIN_H*/
