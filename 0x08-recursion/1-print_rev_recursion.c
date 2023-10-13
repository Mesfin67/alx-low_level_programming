#include "main.h"

/**
* _print_reverse_recursion - prints a string in reverse using recursion.
* @str: string to be printed in reverse
*/
void _print_reverse_recursion(char *str)
{
	if (*str != '\0')
	{
		_print_reverse_recursion(str + 1);
		_putchar(*str);
	}
}

