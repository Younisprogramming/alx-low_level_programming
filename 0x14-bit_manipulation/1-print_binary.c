#include "main.h"
/**
 *print_binary - awdaa
 *@n:dwadaw
 *Return: NO
 */
void print_binary(unsigned long int n)
{
	unsigned int i;
	static unsigned int counter;

	if (n == 0 && counter == 0)
		putchar('0');
	if (n == 0)
		return;
	i = n >> 1;
	counter++;
	print_binary(n >> 1);
	if ((i * 2) != n)
		putchar('1');
	else
		putchar('0');
}