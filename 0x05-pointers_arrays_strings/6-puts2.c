#include "main.h"
#include "string.h"
#include "stdio.h"
/**
 *  *puts2- awdwdw
 *   *
 *    *@str: 1
 *      *
 *       *Return: No
 */
void puts2(char *str)
{
	int a = 0;
	int b = strlen(str);

	while (a < b)
	{
		_putchar(str[a]);
		a = a + 2;
	}
	_putchar('\n');
}
