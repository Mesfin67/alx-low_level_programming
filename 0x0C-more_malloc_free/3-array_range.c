#include "main.h"

/**
 * array_range - creates an array of integers from `min` to `max`, inclusive
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

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(*array) * ((max - min) + 1));
	if (array != NULL)
	{
		for (i = min; i <= max; i++)
		{
			array[j] = i;
			j++;
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
