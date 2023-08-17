#include "main.h"
/**
 *  *  more_numbers - check the code
 *   *
 *    * Return: Always 0.
 */
void more_numbers(void)
{
	int i, s ;
	i = 0;
	while (i < 10)
	{
		s = 0;
		while (s < 15)
		{
			_putchar('0' + s);
			s++
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
