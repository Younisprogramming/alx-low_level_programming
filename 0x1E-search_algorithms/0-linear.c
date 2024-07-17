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
    if(array == NULL)
        return (-1);

    for(int i = 0; i < size ; i++)
    {
        printf("Value checked array[%d] = %d\n", i, *array);
        if (*array == value)
            return (i);
        else
            array++;
    }
    return (-1);
}
