#include "main.h"

/**
* factorial - calculates the factorial of a number using recursion.
* @n: the number to find the factorial of
*
* Return: the factorial of the number, or -1 if the input number is negative.
*/

int factorial(int n)
{
	int next;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	next = factorial(n - 1);
	return (n * next);
}

