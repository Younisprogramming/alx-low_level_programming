#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *  * print_array- awdwdw
 *   *
 *    *@a: 1
 *     *@n: 2
 *      *
 *       *Return: No
 */
void print_array(int *a, int n)
{
	for (int i = 0 ; i < n ; i++)
	{
		printf("%d", array[i]);
		if (i == n - 1)
		{
			break;
		}
		printf(", ");
	}
	printf("\n");
}
