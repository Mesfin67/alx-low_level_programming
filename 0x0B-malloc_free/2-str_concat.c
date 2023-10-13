#include "main.h"
/**
 * str_concat - concatenates two strings.
 *
 * This function concatenates the two strings `s1` and `s2` and returns a pointer to the new string.
 * If either `s1` or `s2` is NULL, the corresponding empty string is used.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to the new string, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
    char *new_str;
    int i, new_str_index = 0, len = 0;

    if (s1 == NULL) {
        s1 = "";
    }

    if (s2 == NULL) {
        s2 = "";
    }

    for (i = 0; s1[i] || s2[i]; i++) {
        len++;
    }

    new_str = malloc(sizeof(char) * len);

    if (new_str == NULL) {
        return NULL;
    }

    for (i = 0; s1[i]; i++) {
        new_str[new_str_index++] = s1[i];
    }

    for (i = 0; s2[i]; i++) {
        new_str[new_str_index++] = s2[i];
    }

    return new_str;
}

