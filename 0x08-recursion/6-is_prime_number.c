#include "main.h"

/**
* is_prime_number - checks if the given number is prime.
* @number: the number to check.
*
* Return: 1 if the number is prime, 0 otherwise.
*/

int is_prime_number(int number)
{
	int start = number / 2;

	if (number <= 1)
		return (0);
	return (is_prime(number, start));
}

/**
* is_prime - recursively checks if the given number is prime.
* @number: the number to check.
* @divisor: the divisor to start checking from.
*
* Return: 1 if the number is prime, 0 otherwise.
*/

int is_prime(int number, int divisor)
{
	if (divisor <= 1)
		return (1);
	else if (number % divisor == 0)
		return (0);
	return (is_prime(number, divisor - 1));
}

