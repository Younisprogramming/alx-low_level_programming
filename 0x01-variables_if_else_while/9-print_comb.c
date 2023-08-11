#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int x = 0;

	while (x < 9)
	{
		putchar('0' + x);
		putchar(',');
		putchar(' ');
		x++;
	}
	putchar('9');
	return (0);
}
