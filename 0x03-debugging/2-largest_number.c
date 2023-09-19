#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @x: first integer
 * @y: second integer
 * @z: third integer
 * Return: largest number
 */
int largest_number(int x, int y, int z)
{
	int largest = y;

	if (x > y)
	{
		largest = x;
	}
	else if (z > y)
	{
		largest = z;
	}

	return (largest);
}

