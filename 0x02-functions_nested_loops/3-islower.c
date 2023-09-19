#include "main.h"
/**
 * _islower -  function that checks  lowercase letters
 *
 * variable x to be checked
 *
 * Return: return 1 -if the letter is lowercase, 0 - ifnot
 */
int _islower(int x)
{
	if (x >= 97 && x <= 122)
		return (1);
	return (0);
}
