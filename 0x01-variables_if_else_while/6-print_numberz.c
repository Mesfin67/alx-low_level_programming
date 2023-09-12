#include <stdio.h>
/**
 * main - entry point
 *
 * Description: a c program that prints the first ten whole numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d + '0');
		++d;
	}
	putchar('\n');
	return (0);
}
