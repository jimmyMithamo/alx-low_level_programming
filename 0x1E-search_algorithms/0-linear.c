#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>

/**
 * linear_search - searches for a value in an array
 * @array: pointer to first element in array
 * @size: size of the array
 * @value: target value to be searched
 *
 * Return: 0 on success, 1 on failure
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
			return (i);
	}
	return (-1);
}
