#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * @c: the variable to be checked
 *
 * Return: 1 for positive , 0 for zero and  -1 for negative
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
