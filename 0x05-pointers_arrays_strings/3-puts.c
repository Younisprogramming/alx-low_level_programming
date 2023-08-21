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
	for (int i = 0 ; i < strlen(str) ; i++)
	{
		putchar(str[i]);
	}
	return (0);
}
