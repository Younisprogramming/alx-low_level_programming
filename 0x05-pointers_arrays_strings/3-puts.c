#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *  *_puts- awdwdw
 *   *
 *    *@str: 1
 *      *
 *       *Return: No
 */
void _puts(char *str)
{
	int i = 0;
	int a = strlen(str);

	while (i < a)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
