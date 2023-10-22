#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two or more positive command-line arguments
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
