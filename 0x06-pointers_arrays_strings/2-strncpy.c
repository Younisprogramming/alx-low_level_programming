#include <stdio.h>
#include <string.h>
/**
 *  *_strncpy - concatenates two strings.
 *   *
 *    *@dest:awdwad
 *     *@src:dwdawd
 *      *@n:dawdwa
 *
 *       * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (count < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	while (count < 2)
	{
		*(dest + count) = '\0';
		count++;
	}

	return (dest);
}
