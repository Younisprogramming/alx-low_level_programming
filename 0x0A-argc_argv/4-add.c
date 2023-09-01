#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int count = 0;
	int i;
	unsigned long int j;

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; j < strlen(argv[i]) ; j++)
		{
			if (!(argv[i][j] >= 48 && argv[i][j] <= 57))
			{
				printf("Error\n");
				return (1);
			}
		}
		count += atoi(argv[i]);
	}
	printf("%d\n", count);
	return (0);
}
