#include "main.h"
/**
 *print_last_digit - Shows 1 if the input is a
 *
 *@i: The character in ASCII code
 *
 *Return: iiiii
 */
int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (l < 0)
	{
	_putchar(-l + 48);
	return (-l);
	}
	else
	{
	_putchar(l + 48);
	return (l);
	}
}
