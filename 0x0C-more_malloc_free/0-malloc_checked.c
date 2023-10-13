#include "main.h"
/**
 * malloc_checked - allocates memory using malloc, exits with status code 98 if it fails
 *
 * This function allocates a block of memory `b` bytes in size using malloc.
 * If the memory allocation fails, the function exits the program with status code 98.
 *
 * @memory_size: size of the memory block to be allocated in bytes
 *
 * Return: a pointer to the allocated memory block, or NULL if the allocation fails
 */

void *malloc_checked(size_t memory_size)
{
    void *memory_block;

    memory_block = malloc(memory_size);
    if (memory_block == NULL) {
        exit(98);
    }

    return memory_block;
}

