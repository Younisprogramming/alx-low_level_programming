#include <string.h>
#include "main.h"
/**
 *  *_strchr - fills memory with a constant byte
 *   *
 *    * @s:vvv
 *     * @c:vvv
 *       *
 *        * Return: char
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *p = 0;

	for (i = 0 ; i < strlen(s) ; i++)
	{
		if (s[i] == c)
		{

			p = &s[i];
			break;
		}
	}
	return (p);
}
