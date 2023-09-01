#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int count = 0;
	unsigned int i;
	int array[5] = {25, 10, 5, 2, 1};
	int s;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	s = atoi(argv[1]);

	if (s < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0 ; i < 5 ; i++)
	{
		count += s / array[i];
		s = s % array[i];
	}
	printf("%d\n", count);
	return (0);
}
