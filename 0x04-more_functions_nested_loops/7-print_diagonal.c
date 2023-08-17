#include "main.h"
/**
 *  * print_diagonal - check the code
 *
 *@n: dwadwad
 *
 *    * Return: Always 0.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0 ; i < n ; i++)
		{
			for (int s = 0 ; s <= i  ; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
