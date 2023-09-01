#include <stdio.h>
#include "main.h"
/**
 *  *_memcpy - fills memory with a constant byte
 *   *
 *    * @dest:vvv
 *     * @src:vvv
 *      * @n:vvv
 *       *
 *        * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *p = dest;

	for (i = 0 ; i < n ; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (p);
}
