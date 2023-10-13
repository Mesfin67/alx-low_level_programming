#include "main.h"

/**
* _puts_recursion - prints a string followed by a new line
* @str: string to be printed
* Return: void
*/
void _puts_recursion(char *str)
{
	if (*str == '\0')
		_putchar('\n');
	else
	{
		_putchar(str[0]);
		_puts_recursion(str + 1);
	}
}

