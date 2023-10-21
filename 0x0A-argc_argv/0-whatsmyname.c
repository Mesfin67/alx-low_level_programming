#include <stdio.h>
/**
 * main - Prints the program name.
 * @argv: An array of pointers to the command-line arguments.
 * Return: Always 0.
 */
int main()
{
	char *program_name = argv[0];
	printf("%s\n", program_name);
	return 0;
}
