#include "main.h"
/**
 *reset_to_98 - pointers
 *
 *@n:parmter
 *
 *Return: 0
 */
void reset_to_98(int *n)
{
	int n = *n;
	int p = &n;
	int *p = 98;
}
