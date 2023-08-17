#include "main.h"
/**
 * print_triangle - check the code
 *   *
 *@size:dawdwad
 *    * Return: Always 0.
 */
void print_triangle(int size)
{
	int i;
	int s;
	int t;

	for (i = 0 ; i < size ; i++)
	{
		for (s = i ; s < size ; s++)
		{
			_putchar(' ');
		}
		for (t = 0 ; t <= i ; t++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
