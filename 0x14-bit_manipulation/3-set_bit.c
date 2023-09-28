#include "main.h"
/**
 * set_bit -  a bit to 1.
 * at a give
 * @n: poer of an unsigned long int.
 * @index: ix of the bit.
 *
 * Return:  worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
