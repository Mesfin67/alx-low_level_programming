#include <stdio.h>

/**
* main - prints the number of command line arguments
*@argc: number of commandline arguments
*@argv:array of command line arguments
*Return: 0
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
