#include <stdio.h>

/**
 * main - prints the name of the source file it was compiled from
 *
 * This function uses the `__FILE__` macro to get the name of the
 * source file it was compiled from. It then prints the name of the
 * source file to the console.
 *
 * Return: nothing to be returned.
 */

int main(void)
{
    printf("%s\n", __FILE__);
    return (0);
}

