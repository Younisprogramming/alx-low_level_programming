#include "main.h"
#include "string.h"
#include "stdio.h"
/**
 *  *puts_half - awdwdw
 *   *
 *    *@str: 1
 *      *
 *       *Return: No
 */
void puts_half(char *str)
{
	int n;
	int i = strlen(str);

	if ((strlen(str) % 2) == 0)
	{
		n = strlen(str) / 2;
	}
	else
	{
		n = ((strlen(str) - 1) / 2) + 1;
	}
	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
