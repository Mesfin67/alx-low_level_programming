#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes from `s2` to concatenate to `s1`
 * Return: a pointer to concatenated string, or NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated_string;
	unsigned int length = n, index;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (index = 0; s1[index]; index++)
	{
		length++;
	}

	concatenated_string = malloc(sizeof(char) * (length + 1));

	if (concatenated_string == NULL)
	{
		return (NULL);
	}

	length = 0;

	for (index = 0; s1[index]; index++)
	{
		concatenated_string[length++] = s1[index];
	}

	for (index = 0; s2[index] && index < n; index++)
	{
		concatenated_string[length++] = s2[index];
	}

	concatenated_string[length] = '\0';

	return (concatenated_string);
}
