#include "main.h"

/**
 * array_range - creates an array of integers from `min` to `max`, inclusive
 *
 * This function allocates memory for an array of integers, and initializes it
 * with the values from `min` to `max`, inclusive. If `min` is greater than
 * `max`, the function returns NULL. If the memory allocation fails, the
 * function also returns NULL.
 *
 * @min: smallest number in the array
 * @max: largest number in the array
 *
 * Return: a pointer to the allocated array, or NULL on failure
 */

int *array_range(int min, int max)
{
    int *array;
    int i, j = 0;

    if (min > max) {
        return NULL;
    }

    array = malloc(sizeof(*array) * ((max - min) + 1));
    if (array != NULL) {
        for (i = min; i <= max; i++) {
            array[j] = i;
            j++;
        }
        return (array);
    } else {
        return (NULL);
    }
}

