#include "main.h"
/**
 *times_table - Prints the 9 times table
 *
 *Return: no return
 */
void times_table(void)
{
	int a, b, op;

	while (a < 10)
	{
		_putchar(48);
		while (b < 10)
		{
			op = a * b;
			_putchar(44);
			_putchar(32);
			if (op <= 9)
			{
				_putchar(32);
				_putchar(op + 48);
			}
			else
			{
				_putchar((op / 10) + 48);
				_putchar((op % 10) + 48);
			}
			b++;
		}
		_putchar('\n');
		c++;
	}
}
