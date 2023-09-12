#include <stdio.h>
/**
 * main - entry point
 *
 * Description: A program that prints numbers separating by comma
 *
 * Return: Always 0
 */
int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d + 48);
		if (d != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++d;
	}
	putchar('\n');
	return (0);
}
