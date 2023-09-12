#include <stdio.h>
/**
 * main- entry point
 *
 * Description: a program to print the first ten whole numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		printf("%i", d);
		++d;
	}
	printf("\n");
	return (0);
}
