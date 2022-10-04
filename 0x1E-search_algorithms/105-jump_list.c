#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_list - a function that searches for a value in a
 * sorted list of integers using the Jump search algorithm.
 *
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 * Return: NULL or a pointer to the node of the value
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size);
	listint_t *check = NULL, *ptr = NULL;

	if (!list)
		return (NULL);

	ptr = list;
	check = list;

	while (ptr->next)
	{
		if (ptr->index && ptr->index % jump == 0)
		{
			printf("Value checked at index [%ld] = [%d]\n", ptr->index, ptr->n);
			if (ptr->n >= value)
				break;
			check = ptr;
		}
		ptr = ptr->next;
	}
	if (!ptr->next)
		printf("Value checked at index [%ld] = [%d]\n", ptr->index, ptr->n);

	printf("Value found between indexes ");
	printf("[%ld] and [%ld]\n", check->index, ptr->index);

	while (check)
	{
		printf("Value checked at index [%ld] = [%d]\n", check->index, check->n);
		if (check->n == value)
			return (check);
		check = check->next;
	}
	return (NULL);
}
