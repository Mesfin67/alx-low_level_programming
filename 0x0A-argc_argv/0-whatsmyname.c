#include <stdio.h>
/**
 * main - prints the name of the program to the console
 *
 * This function prints the name of the program to the console. It takes the
 * number of command-line arguments and the array of command-line arguments as
 * arguments, but does not use them.
 *
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
    printf("%s\n", argv[0]);

    return (0);
}

