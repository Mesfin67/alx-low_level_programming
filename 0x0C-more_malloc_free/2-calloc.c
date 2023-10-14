#include "main.h"
/**
 * _calloc - allocates memory using malloc and initializes it to zero
 *
 * This function allocates a block of memory `nmemb * size` bytes in size using malloc,
 * and initializes it to zero. If either `nmemb` or `size` is zero, the function
 * returns NULL. If the memory allocation fails, the function also returns NULL.
 *
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Return: a pointer to the allocated memory block, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			block[i] = 0;
		return (block);
	}
	else
		return (NULL);
}
