#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number using recursion
* @number: number to be used
*
* Return: the square root of number
*/

int _sqrt_recursion(int number)
{
	if (number == 0 || number == 1)
		return (number);
	return (_sqrt(0, number));
}

/**
* _sqrt - returns the square root of a number using recursion
* @test_number: test number
* @squared_number: squared number
*
* Return: the square root of test_number
*/

int _sqrt(int test_number, int squared_number)
{
	if (test_number > squared_number / 2)
		return (-1);
	else if (test_number * test_number == squared_number)
		return (test_number);
	return (_sqrt(test_number + 1, squared_number));
}

