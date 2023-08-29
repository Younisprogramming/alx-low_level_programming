#include "main.h"
/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, t;

	for (i = 0 ; a[i][7] ; i++)
	{
		for (t = 0 ; t < 8 ; t++)
		{
			_putchar(a[i][t]);
		}
		if (i < 8 - 1)
			_putchar('\n');
	}
}
