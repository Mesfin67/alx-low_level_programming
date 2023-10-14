#include "dog.h"
/**
 * init_dog - initializes a dog struct
 *
 * This function initializes a dog struct with the given name, age, and owner.
 * If the dog struct is NULL, the function does nothing.
 *
 * @d: a pointer to the dog struct to be initialized
 * @name: the dog's name
 * @age: the dog's age in years
 * @owner: the dog's owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
