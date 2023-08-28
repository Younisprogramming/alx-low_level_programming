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
	unsigned int i = 0;
	char *p = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
		i++;
	}
	return (p);
}
