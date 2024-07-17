#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - linear search algos
 * @array: a pinter t array
 * @size: the size of array
 * @value: the value we will search for ...
 * Return: the index of the value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = %d\n", i, *array);
		if (*array == value)
			return (i);
		array++;
		i++;
	}
	return (-1);
}
