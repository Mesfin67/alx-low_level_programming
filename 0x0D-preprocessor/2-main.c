#include <stdio.h>

/*
 * main - prints the name of the source file it was compiled from
 * This function utilizes the `__FILE__` macro to retrieve the name of the
 * source file it was compiled from. Subsequently, the name of the
 * source file is printed to the console.
 * Return value: nothing to be returned.
 */

int main(void)
{
    printf("%s\n", __FILE__);
    return (0);
}

