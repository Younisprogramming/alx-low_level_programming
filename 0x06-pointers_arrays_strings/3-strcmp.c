#include "main.h"
#include <string.h>
/**
 *  *_strcmp - concatenates two strings.
 *   *
 *    *@s1:awdwad
 *     *@s2:dwdawd
 *      *
 *       * Return: char
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;

	if (s1 == s2)
	return (0);
	else
	{
		for ( ; count < strlen(s1) && s1 != '\0'; count++)
		{
			if (s1[count] != s2[count])
			{
				return (s1[count] - s2[count]);
			}
		}
	}
}
