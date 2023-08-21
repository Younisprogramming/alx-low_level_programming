#include "main.h"
#include "string.h"
#include "stdio.h"
/**
 *  * rev_string - awdwdw
 *   *
 *    *@s: 1
 *      *
 *       *Return: No
 */
void rev_string(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
