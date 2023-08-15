#include "main.h"
/**
 *print_alphabet - Prints the alphabet in lowercase.
 *
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
