#include "main.h"
/**
 * _abs - checks the absolute value of a number
 *
 * @a: the variable to be checked
 *
 * Return: return value is the variable
 */
int _abs(int a)
{
	if (a < 0)
		a = (-1) * a;
	return (a);
}
