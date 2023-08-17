#include "main.h"
/**
 *  *print_number - check the code
 *   *
 *@n:dwdawd
 *    * Return: Always 0.
 */
void print_number(int n)
{
	if (n >= 10)
	{
		_putchar('0' + n / 10);
	}
	else
	{
		_putchar('0' + n % 10);
	}
}
