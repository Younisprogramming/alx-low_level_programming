#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succsess)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar("\n");
	return (0);
}
