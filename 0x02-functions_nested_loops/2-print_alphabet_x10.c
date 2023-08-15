#include "main.h"
/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void);
	{
	int i = 0;
	int x = 'a';

	while (i < 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		i++;
	}
	_putchar('\n');
}

