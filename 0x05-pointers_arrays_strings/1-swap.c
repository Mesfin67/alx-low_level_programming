#include "main.h"
/**
 *swap_int - swap two integers
 *@x: first integer
 *@y: second integer
 *Return: nothing
 */
void swap_int(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
