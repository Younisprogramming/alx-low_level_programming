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
	int s = strlen(s1);

	while (s1[count] != '\0' || s2[count] != '\0')
	{
		if (s1[count] == s2[count])
			s--;
		if (s == 0)
			return (0);
		count++;
	}

	count = 0;

	while (count < strlen(s1) && s1[count] != '\0')
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
}
