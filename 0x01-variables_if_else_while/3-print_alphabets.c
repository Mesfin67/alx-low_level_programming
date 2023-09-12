#include <stdio.h>
/**
 * main - entry point
 *
 * Description: a program to print small letters a-z and captial letters A-Z
 *
 * Return: always 0
 */
int main(void)
{
	char alp = 'a';
	char ALP = 'A';

	while (alp <= 'z')
	{
		putchar(alp);
		++alp;
	}
	while (ALP <= 'Z')
	{
		putchar(ALP);
		++ALP;
	}

	putchar('\n');
	return (0);
}
