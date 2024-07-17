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
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
