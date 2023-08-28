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
	char *p;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
		i++;
	}
	if (s[i] == c)
	{
		p = &s[i];
		return (p);
	}
	return ('\0');
}
