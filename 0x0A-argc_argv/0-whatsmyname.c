#include <stdio.h>

/**
 * main - prints the name of the program, followed by a new line
 *
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
    printf("%s\n", argv[0]);

    return 0;
}

