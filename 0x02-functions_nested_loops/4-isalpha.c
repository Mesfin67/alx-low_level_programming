#include "main.h"
/**
 * _isalpha - checks if a variable is an alphabet
 *
 * @a: the variable to be checked
 *
 * Return: 1 for letters o for rest
 */
int _isalpha(int a)
{
	if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
		return (1);
	return (0;
}
