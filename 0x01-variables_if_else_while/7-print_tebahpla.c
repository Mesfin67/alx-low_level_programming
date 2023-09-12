#include <stdio.h>
/**
 * main - entry point
 *
 * Description:  a c program that prints english letters in reverse
 *
 * Return: always 0
 */
int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		--alp;
	}
	putchar('\n');
	return (0);
}
