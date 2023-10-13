#include "main.h"

/**
* wildcmp - compares two strings and returns 1 if identical
* @string1: string to be checked
* @string2: pattern to be used
*
* Return: 1 if identical, 0 otherwise
*/

int wildcmp(char *string1, char *string2)
{
	if (*string2 == '\0')
		return (*string1 == '\0');
	if (*string2 == *string1)
		return (*string1 != '\0' && wildcmp(string1 + 1, string2 + 1));
	if (*string2 == '*')
		return (wildcmp(string1, string2 + 1) || (*string1 != '\0' && wildcmp(string1 + 1, string2)));
       return (0);
}
