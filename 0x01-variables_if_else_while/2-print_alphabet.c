#include <stdio.h>
/**
 * main - entry point
 *
 * Description: a program that prints a-z
 *
 * Return: always 0
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		++alp;
	}

	putchar('\n');
	return (0);
}
