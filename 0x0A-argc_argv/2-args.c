#include <stdio.h>

/**
* main - prints all command-line arguments to the console
*
* @num_args: number of command-line arguments
* @args: array of command-line arguments
*
* Return: 0
*/
int main(int num_args, char *args[])
{
    int i;

    for (i = 0; i < num_args; i++) {
        printf("%s\n", args[i]);
    }

    return (0);
}

