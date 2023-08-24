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
	int i;
	int s;

	for (i = 0 ; i < strlen(dest) ; i++)
	{
		pt[i] = dest[i];
	}

	s = strlen(dest);

	for (i = 0 ; i < strlen(src) ; i++)
	{
		pt[s] = src[i];
		s++;
	}
	return (pt);
}
