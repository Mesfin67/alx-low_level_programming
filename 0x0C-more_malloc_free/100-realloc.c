/**
 * realloc_memory - reallocates a memory block
 *
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size of ptr
 * @new_size: size of the new memory to be allocated
 *
 * Return: pointer to the address of the new memory block, or NULL on failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *temp_block;
    unsigned int i;

    if (ptr == NULL) {
        return malloc(new_size);
    } else if (new_size == old_size) {
        return ptr;
    } else if (new_size == 0 && ptr != NULL) {
        free(ptr);
        return NULL;
    } else {
        temp_block = malloc(new_size);
        if (temp_block != NULL) {
            for (i = 0; i < min(old_size, new_size); i++) {
                *((char *)temp_block + i) = *((char *)ptr + i);
            }
            free(ptr);
            return temp_block;
        } else {
            return NULL;
        }
    }
}

