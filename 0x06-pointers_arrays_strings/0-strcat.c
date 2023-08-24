#include "main.h"
#include <string.h>
/**
 *_strcat - concatenates two strings.
 *
 *@dest:awdwad
 *@src:dwdawd
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char pt[strlen(dest)];
	int i = 0;
	int s;

	while (i < strlen(dest))
	{
		pt[i] = dest[i];
		i++;
	}

	s = strlen(dest);

	while (i < strlen(src))
	{
		pt[s] = src[i];
		i++;
		s++;
	}
	return (pt);
}
