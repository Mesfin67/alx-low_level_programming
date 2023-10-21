#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints its name, followed by a new line
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of pointers to the command-line arguments.
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
