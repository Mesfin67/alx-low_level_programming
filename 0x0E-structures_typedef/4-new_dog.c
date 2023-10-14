#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string.
 *
 * @str: The string to be measured.
 *
 * Return: The length of the string, or 0 if str is NULL.
 */
int _strlen(char *str)
{
    int length = 0;

    while (str)
    {
        length++;
        str++;
    }

    return (length);
}

/**
 * _strcopy - Copies one string to another.
 *
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the destination string.
 */
char *_strcopy(char *dest, char *src)
{
    int index = 0;

    for (; src[index]; index++)
    {
        dest[index] = src[index];
    }

    dest[index] = '\0';

    return (dest);
}

/**
 * new_dog - Creates a new dog struct.
 *
 * @new_dog_name: The name of the new dog.
 * @new_dog_age: The age of the new dog.
 * @new_dog_owner: The owner of the new dog.
 *
 * Return: A pointer to the new dog struct, or NULL if there is an error.
 */
dog_t *new_dog(char *new_dog_name, float new_dog_age, char *new_dog_owner)
{
    dog_t *doggo;

    if (new_dog_name == NULL || new_dog_age < 0 || new_dog_owner == NULL)
    {
        return (NULL);
    }

    doggo = malloc(sizeof(dog_t));
    if (doggo == NULL)
    {
        return (NULL);
    }

    doggo->name = malloc(sizeof(char) * (_strlen(new_dog_name) + 1));
    if (doggo->name == NULL)
    {
        free(doggo);
        return (NULL);
    }

    doggo->owner = malloc(sizeof(char) * (_strlen(new_dog_owner) + 1));
    if (doggo->owner == NULL)
    {
        free(doggo->name);
        free(doggo);
        return (NULL);
    }

    doggo->name = _strcopy(doggo->name, new_dog_name);
    doggo->age = new_dog_age;
    doggo->owner = _strcopy(doggo->owner, new_dog_owner);

    return (doggo);
}

