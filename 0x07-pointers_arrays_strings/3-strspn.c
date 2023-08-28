#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *  *_strspn - fills memory with a constant byte
 *   *
 *    * @s:vvv
 *     * @accept:vvv
 *       *
 *        * Return: char
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int found = 0;
	unsigned int count = 0;
	unsigned int i, t;

	for (i = 0 ; i < strlen(s) ; i++)
	{
		for (t = 0 ; t < strlen(accept) ; t++)
		{
			if (s[i] == accept[t])
			{
				found = 1;
				break;
			}
		}
		if (found)
			count++;
		else
			break;
		found = 0;
	}
	return (count);
}
