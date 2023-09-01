#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};

	int i = 0;

	while (i < 8)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
