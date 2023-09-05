#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *cp;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	cp = malloc(sizeof(char) * strlen(str) + 1);

	if (cp == NULL)
		return (NULL);

	for (i = 0 ; i <= strlen(str) ; i++)
	{
		cp[i] = str[i];
	}
	return (cp);
}
