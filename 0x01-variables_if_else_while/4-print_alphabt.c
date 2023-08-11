#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char a[24] = "abcdfghijklmnoprstuvwxyz";

	for (int i = 0 ; i < 24 ; i++)
	{
		putchaar(a[i]);
	}
	putchar('\n');
	return (0);
}
