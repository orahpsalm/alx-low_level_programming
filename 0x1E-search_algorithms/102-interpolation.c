#include "search_algos.h"
#include <stdio.h>

/**
 * search_recursion - a function that uses recursion to search for value
 * @array: the array in which value is searched for
 * @low: minimum index
 * @high: maximum index
 * @size: size of the array
 * @value: value to search
 *
 * Return: -1 or index of value
 */

int search_recursion(int *array, int low, int high, size_t size, int value)
{
	size_t pos = low + (((double)(high - low) / (array[high] - array[low]))
	* (value - array[low]));

	if (pos > size - 1)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}

	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

	if (array[pos] == value)
		return (pos);

	if (array[pos] < value)
		return (search_recursion(array, pos + 1, high, size, value));
	else
		return (search_recursion(array, low, pos - 1, size, value));
}

/**
 * interpolation_search - a function that searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: -1 or the index of the value
 */

int interpolation_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (search_recursion(array, 0, size - 1, size, value));
}
