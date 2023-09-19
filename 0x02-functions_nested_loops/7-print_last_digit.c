#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @a: the number
 *
 * Return: the last digit
 */
int print_last_digit(int a)
{
	int d;

	if (a < 0)
		d = -1 * (a % 10);
	else
		d = a % 10;
	_putchar(d + '0');
	return (d);
}
