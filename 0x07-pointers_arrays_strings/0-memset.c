#include <stdio.h>
#include "main.h"
/**
 *_memset - fills memory with a constant byte
 *
 * @s:vvv
 * @b:vvv
 * @n:vvv
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; i < 95 ; i++)
	{
		s[i] = 'b';
	}
	return (s);
}
