#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Description:  printing  hexadecimals
 *
 * Return: Always 0
 */
int main(void)
{
	char a;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
