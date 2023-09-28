#include "main.h"
/**
 *binary_to_uint - aaa
 *@b: bbb
 *Return: sum
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j = 0, sum = 0;

	if (b == NULL)
		return (0);
	for (i = (strlen(b) - 1) ; i >= 0 ; i--)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			sum += ((b[i] - '0') << j);
			j++;
		}
		else
			return (0);
	}
	return (sum);
}
