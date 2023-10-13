#include "main.h"
/**
 * _strdup - allocates and returns a copy of the given string.
 * @str: string to be copied
 * Return: pointer to the copied string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		new_str[i] = str[i];
	}

	new_str[len] = '\0';

	return (new_str);
}

