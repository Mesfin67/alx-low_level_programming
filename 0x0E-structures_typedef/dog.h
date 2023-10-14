#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * @name: the dog's name
 * @age: the dog's age in years
 * @owner: the dog's owner's name
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/**
 * @typedef dog_t: a typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * init_dog - initializes a dog struct
 * @d: a pointer to the dog struct to be initialized
 * @name: the dog's name
 * @age: the dog's age in years
 * @owner: the dog's owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

#endif
