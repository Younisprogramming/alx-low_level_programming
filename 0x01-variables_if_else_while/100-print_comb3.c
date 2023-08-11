#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int x = 48;
	int i = 48;

	while (x < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (x != i && x < i)
			{
				putchar(x);
				putchar(i);
				if (i == 57 && x == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		   i++;
		}
	    x++;
	}
	putchar('\n');
	return (0);
}
