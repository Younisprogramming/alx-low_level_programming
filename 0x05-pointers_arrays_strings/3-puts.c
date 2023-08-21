#include "main.h"
#include "string.h"
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

	while (i < strlen(str))
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}
