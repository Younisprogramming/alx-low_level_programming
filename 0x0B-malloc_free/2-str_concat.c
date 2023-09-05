#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int a, j, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	i = strlen(s1) + strlen(s2);

	p = malloc(sizeof(char) * i + 1);

	if (p == NULL)
		return (NULL);

	for (j = 0 ; j < strlen(s1) ; j++)
	{
		p[j] = s1[j];
	}
	for (a = 0 ; a < strlen(s2) ; a++)
	{
		p[j] = s2[a];
		j++;
	}
	return (p);
}
