#include "main.h"
/**
 * print_line - check the code
 *
 *@n:wwdwadw
 *
 *Return: Always 0.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (int i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
	putchar('\n');
	}
}
