#include <string.h>
#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 *                                       of the located substring.
 *         If the substring is not located - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int h, n = 0, p = 0;
	unsigned int len = strlen(needle);

	for (h = 0 ; h < strlen(haystack) ; h++)
	{
		if (haystack[h] == needle[n])
		{
			if (n == 0)
				p = h;
			n++;
			if (n == len)
				break;
		}
		else
		{
			n = 0;
			p = 0;
		}
	}
	if (n == len)
		return (haystack + p);
	else
		return ('\0');
}
