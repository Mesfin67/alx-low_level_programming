#include <stdio.h>
/**
 * main - entry point
 * Description: a program that prints a-z
 * Return: always 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		++alphabet;
	}

	putchar('\n');
	return (0);
}
