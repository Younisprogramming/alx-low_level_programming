#include "mian.h"
/**
 *  *_puts_recursion - the code
 *   *
 *    *@s: input
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);

	_puts_recursion(s + 1);
}
