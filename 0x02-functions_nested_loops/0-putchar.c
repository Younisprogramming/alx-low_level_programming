#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};

	for (int i = 0 ; i < 8 ; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
