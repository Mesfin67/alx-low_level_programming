#include "main.h"

/**
 * get_endianness - Determines the endianness of the system.
 *
 * Return: 1 for little-endian, 0 for big-endian.
 */
int get_endianness(void)
{
	int num = 1;
	return (*(char *)&num);
}

