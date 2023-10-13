#include "main.h"

/**
* _string_length_recursion - gives the length of a string using recursion.
* @str: string to be measured
* Return: length of the string
*/

int _string_length_recursion(char *str)
{
	int length = 0;

	if (*str != '\0')
	{
		length++;
		length += _string_length_recursion(str + 1);
	}
	return (length);
}

