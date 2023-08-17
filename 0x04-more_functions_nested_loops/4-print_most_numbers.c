#include "main.h"
/**
 *  * print_most_numbers - check the code
 *   *
 *    * Return: Always 0.
 */
void print_most_numbers(void)
{
	int s = 0;

	while (s < 10)
	{
		if (s == 2 || s == 4)
			s++;
		_putchar('0' + s);
		s++;
	}
	_putchar('\n');
}
