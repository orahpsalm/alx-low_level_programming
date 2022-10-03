#include "search_algos.h"
#include <stdio.h>

/**
 * binary_recursion - a function to implement binaray search recursively
 * @array: the array to search
 * @left: the minimum index
 * @right: the maximum index
 * @value: the value to find
 * Return: -1 or index of  value
 */

int binary_recursion(int *array, size_t left, size_t right, int value)
{
	size_t i, mid = (left + right) / 2;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i < right)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}

	if (array[mid] == value)
		return (mid);

	if (left == right)
		return (-1);

	if (array[mid] > value)
		return (binary_recursion(array, left, mid - 1, value));
	else
		return (binary_recursion(array, mid + 1, right, value));
}

/**
 * binary_search - a function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: size of the array
 * @value: value to find
 * Return: -1 or the index of the value
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (binary_recursion(array, 0, size - 1, value));
}
