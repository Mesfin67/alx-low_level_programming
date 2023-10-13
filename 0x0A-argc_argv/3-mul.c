#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the product of two numbers
*
* This function takes two command-line arguments and prints their product to the console, followed by a new line.
*
* @num_args: number of command-line arguments
* @args: array of command-line arguments
*
* Return: 0 on success, 1 on failure
*/
int main(int num_args, char *args[])
{
    int factor1, factor2, product;

    if (num_args <= 2) {
        printf("Error: Insufficient number of arguments.\n");
        return 1;
    }

    factor1 = atoi(args[1]);
    factor2 = atoi(args[2]);
    product = factor1 * factor2;

    printf("%d\n", product);

    return 0;
}

