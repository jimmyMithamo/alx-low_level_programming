#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for a value in an array using binary search
 * @array: array
 * @size: size of array
 * @value: target value
 *
 * Return: 0 on success
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int i;
	int right = (int)size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		int mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%d, ", array[i]);
		printf("\n");

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
